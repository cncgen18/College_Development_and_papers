/*-----------------------------------------------------------------------
 Alex Kuhl - CSC 402 - Project 1 Solution - Implementation of BeCaMaze.h
**/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <random>
#include <algorithm>
#include <functional>
#include <utility>

#include "BeCaMaze.h"
#include "Cell.h"      // for the constants

const string BeCaMaze::markers = "&@#+-~?%" ;  // I removed * from this list, replaced with &, so it was clear that all cells had been visited

char BeCaMaze::getRandomMarker( ) const
{
	mt19937 rand_engine( rd( ) ) ;
	uniform_int_distribution<int> uniform_dist( 0, markers.size( )-1 ) ;
	return( markers[ uniform_dist( rand_engine ) ] ) ;
}

BeCaMaze::BeCaMaze( string file )
	: largestArea( 0 ), numAreas( 0 ), numPaths( 0 ), solved( false )
{

	// read file
	ifstream ifs( file ) ;
		
	char c ;   // holder for the walls--/ or \--in the input file

	// maze sizing
	// outside vector represents rows in the maze, so corresponds to the y (height) component
	// inside vector represents the columns of a row, so corresponds to the x (width) component
	ifs >> width >> height ;
	maze.resize( height ) ;

	// read maze
	for( int y = 0 ; y < height ; ++y )
	{
		for( int x = 0 ; x < width ; ++x )
		{
			ifs >> c ;
			maze[ y ].push_back( Cell( x, y, c ) ) ;
		}
	}

}

BeCaMaze::BeCaMaze( int width, int height )
	: largestArea( 0 ), numAreas( 0 ), numPaths( 0 ), width( width ), height( height ), solved( false ), maze( height )
{
	mt19937 rand_engine( rd( ) ) ;
	uniform_int_distribution<int> uniform_dist( 0, 1 ) ;

	for( int y = 0 ; y < height ; ++y )
	{
		for( int x = 0 ; x < width ; ++x )
		{
			if( uniform_dist( rand_engine ) == 0 )
				maze[ y ].push_back( Cell( x, y, '\\' ) ) ;
			else
				maze[ y ].push_back( Cell( x, y, '/' ) ) ;
		}
	}

}

// copy constructor
BeCaMaze::BeCaMaze( const BeCaMaze &rhs )
	: largestArea( rhs.largestArea ), numAreas( rhs.numAreas ), numPaths( rhs.numPaths ), width( rhs.width ), height( rhs.height ), maze( rhs.maze )
{
	// empty because all data is handled by individual copy constructors, including Cell's
	// this is essentially the default constructor the compiler will write automatically, so writing it is not required syntactically,
	// I put it here since I asked for one in the requirements
}
	
// this operator= uses the "copy and swap" idiom instead of the pointer test followed by a data copy process
// since that process is basically the same as the copy constructor
// rhs comes in as a copy of the original data (using copy constructor)
// then just swap its data with this's since it is a temporary object anyway
// this will be inefficient for the case of assigning an object to itself, but how often does that actually happen?
// ** for this to work the copy constructor must not be explicit
const BeCaMaze& BeCaMaze::operator=( BeCaMaze rhs )
{
	std::swap( width, rhs.width ) ;
	std::swap( height, rhs.height ) ;
	std::swap( largestArea, rhs.largestArea ) ;
	std::swap( numAreas, rhs.numAreas ) ;
	std::swap( numPaths, rhs.numPaths ) ;
	std::swap( solved, rhs.solved ) ;
	std::swap( maze, rhs.maze ) ;

	return *this ;
}


void BeCaMaze::print( ostream &out ) const
{
	const Cell *c ;
	for( int y = 0 ; y < height ; ++y )
	{
		for( int x = 0 ; x < width ; ++x )
		{
			c = &maze[ y ][ x ] ;
			cout << c->getLeft( ).getMarker( ) << c->getWall( ) << c->getRight( ).getMarker( ) ;
		}
		cout << endl ;
	}
}

void BeCaMaze::printSolution( ostream &out ) const
{
	cout << "Number of paths: " << numPaths << endl ;
	if( numAreas > 0 )
		cout << "Number of enclosed areas:    " << numAreas << endl
	         << "Largest enclosed area found: " << largestArea << endl ;
	else
		cout << "No enclosed areas found." << endl ;
	print( ) ;
}

/**------------------------------------------------------------------------------------------
  Puzzle solving functions
*/

void BeCaMaze::solve( ) 
{
	if( solved )  // 
		return ;  // if the puzzle has been solved no reason to do it again	

	// loop over grid edges first, starting with top and bottom edges
	for( int x = 0 ; x < width ; ++x )
	{
		examinePaths( x, 0, false, TOP ) ;
		examinePaths( x, height-1, false, BOTTOM ) ;
	}

	// loop over left and right edges
	for( int y = 0 ; y < height ; ++y )
	{
		examinePaths( 0, y, false, LEFT ) ;
		examinePaths( width-1, y, false, RIGHT ) ;
	}

	// loop over rest of maze, only enclosed areas should now be found
	// still must go over x=0 and y=0 because only the outward-facing halves of those were examined above
	for( int y = 0 ; y < height-1 ; ++y )
		for( int x = 0 ; x < width-1 ; ++x )
		{
			//cout << "examining " << x << " " << y << endl ; print( ) ; cout << endl ;
			examinePaths( x, y, true ) ;
		}

	solved = true ;
}

// test if a "movement," meaning continuing on a path, is valid based on the current half and the desired direction
// code could be shortened with && but I went for readability
bool BeCaMaze::canMove( const CellHalf& half, int direction ) const
{
	switch( direction )
	{
	case UP:
		if( half.isBottom( ) )
			return false ; // can't move up if on bottom side
		if( half.getY( ) == 0 )
			return false ; // can't move up if it would go off the maze
		if( maze[half.getY()-1][half.getX( )].getBottom( ).isVisited( ) )
			return false ;
		return true ;
	case DOWN:
		if( half.isTop( ) )
			return false ; // can't move up if on top side
		if( half.getY( ) == height-1 )
			return false ; // can't move down if it would go off the maze
		if( maze[half.getY()+1][half.getX( )].getTop( ).isVisited( ) )
			return false ;
		return true ;
	case LEFT:
		if( half.isRight( ) )
			return false ; // can't move left if on right side
		if( half.getX( ) == 0 )
			return false ; // can't move left if it would go off the maze
		if( maze[half.getY()][half.getX( )-1].getRight( ).isVisited( ) )
			return false ;
		return true ;
	default: // case RIGHT
		if( half.isLeft( ) )
			return false ; // can't move right if on left side
		if( half.getX( ) == width-1 )
			return false ; // can't move right if it would go off the maze
		if( maze[half.getY()][half.getX( )+1].getLeft( ).isVisited( ) )
			return false ;
		return true ;
	}
}

void BeCaMaze::processResult( pair<int,bool> &result )
{
	// solvePath did not find a path
	if( result.first < 1 )
		return ;

	// test if an area (re: enclosed area) was found and if it is see if a new record
	// pair will be the length of the path and a bool of whether the path was an area
	if( result.second )
	{
		numAreas++ ;
		if( result.first > largestArea )
			largestArea = result.first ;
		//cout << "area found of length " << result.first <<endl;
	}
	numPaths += 1 ;
}

void BeCaMaze::examinePaths( int x, int y, bool isArea, int side )
{
	if( side != -1 )
		processResult( solvePath( x, y, isArea, side, getRandomMarker( ) ) ) ;
	else
	{

		if( !maze[y][x].getLeft( ).isVisited( ) ) 
			processResult( solvePath( x, y, isArea, LEFT, getRandomMarker( ) ) ) ;
		if( !maze[y][x].getRight( ).isVisited( ) )
			processResult( solvePath( x, y, isArea, RIGHT, getRandomMarker( ) ) ) ;
	}
}

// **This function should only be called at the valid start of a path**
// pair returned represents the path length and a bool of whether the path is an enclosed area
// you could have written a small class to serve the same purpose, or written functions/class data
// differently to make this unnecessary
pair<int,bool> BeCaMaze::solvePath( int startX, int startY, bool isArea, int side, char mark )
{
	// I use pointers here because I later re-assign half to another object, which is not valid with a reference
	CellHalf *half = &maze[startY][startX].getSide( side ) ;
	CellHalf *start = half ;

	// Cannot solve a path that begins on a visited half, so not a valid starting point
	if( half->isVisited( ) )
		return pair<int,bool>( -1, false ) ;

	// initialize the path
	half->markVisited( ) ;
	half->setMarker( mark ) ;
	int length = 1, x = startX, y = startY ;

	while( true )
	{
		if( canMove( *half, RIGHT ) )
		{
			length++ ;
			x++ ;
			side = LEFT ;
		}
		else if( canMove( *half, UP ) )
		{
			length++ ;
			y-- ;
			side = BOTTOM ;
		}
		else if( canMove( *half, DOWN ) )
		{
			length++ ;
			y++ ;
			side = TOP ;
		}
		else if( canMove( *half, LEFT ) )
		{
			length++ ;
			x-- ;
			side = RIGHT ;
		}
		else
			break ; // no moves were found, so we can exit the while loop

		// set up for next loop
		half = &maze[y][x].getSide( side ) ;
		half->markVisited( ) ;
		half->setMarker( mark ) ;
	}

	/* Check if an enclosed area was found
	   Criteria:
	     * start and end (x,y) grid positions in the maze are adjancent (not diagonal)
	     * start and end halves"face" each other (an enclosed area cannot end in a state like +/ \+ where the plusses are the halves start/end are in)
		   --> this is taken care of by how solve/examinePath works, no check required
	     * length is 4 or more (shorter areas cannot be enclosed)
	*/
	int typeStart = start->getType( ), typeEnd = half->getType( ) ;	
	if( isArea && ( abs( start->getX( )-half->getX( ) ) + abs( start->getY( )-half->getY( ) ) != 1 || length < 4 ) )
	{
		// this should never run
		cerr << "Invalid area encountered: " << endl 
			 << "  started (" << start->getX( ) << "," << start->getY( ) << ")" << endl 
			 << "  ended   (" << half->getX( )  << "," << half->getY( )  << ")" << endl 
		     << "  length " << length << " start type " << typeStart << " end type " << typeEnd << endl << endl ;
	}
	return pair<int,bool>( length, isArea ) ;
}

ostream& operator<<( ostream& out, const BeCaMaze &m ) 
{
	m.print( out ) ;
	return out ;
}