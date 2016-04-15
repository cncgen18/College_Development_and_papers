
/*-----------------------------------------------------------------------
 Alex Kuhl - CSC 402 - Project 1 Solution
 
 Implementation of a Be Ca Maze. This class encapsulates the storage of
 Cells in a 2D array (vectors), printing functionality, and, of course,
 functions related to solving the problem.
**/

#pragma once

#include <vector>
#include <random>
#include <iostream>
#include <utility>  // for pair<>, which I use as a way to return two mixed values from solvePath( )
#include <QObject>

#include "Cell.h"

using namespace std ;

class BeCaMaze : public QObject
{
private:
	static const string markers ;
	int width, height, largestArea, numAreas, numPaths ;
	bool solved ;
	mutable random_device rd ;
	vector< vector<Cell> > maze ;

	char getRandomMarker( ) const ;

public:
	BeCaMaze( ) { } ; // empty default constructor
	explicit BeCaMaze( string ) ;
	BeCaMaze( const BeCaMaze& ) ; 
	BeCaMaze( int width, int height ) ;			// explicit not required since it has more than one parameter

	const BeCaMaze& operator=( BeCaMaze rhs ) ;

	void print( ostream &out=cout ) const ;			// draw a really awful ASCII version of the maze
													// each grid Cell is drawn as the path marker for each half with the
													// appropriate wall character (/ or \) between
													// so the example 6x4 maze will be drawn with 18 characters x 4 rows
	void printSolution( ostream &out=cout ) const ;	// same awful ASCII, but with added solution data!
	
	// simple accessors, implemenation left here
	int getNumPaths( )	  const { return numPaths ; }
	int getNumAreas( )    const { return numAreas ; }
	int getLargestArea( ) const { return largestArea ; }
	int getWidth( )       const { return width ; }
	int getHeight( )      const { return height ; }
	bool isSolved( )	  const { return solved ; }

	/* The solving algorithm I chose to use is this:
         ** key observation: This maze has no decisions once you start a path, assuming you always start on an edge or start inside an enclosed area.
		 1. Go over all paths that open to the outside by looking around the edges of the maze first
		 2. Any remaining unvisited nodes should be within enclosed areas (which will be circular by nature), so procedurally examine
		    maze for unvisited nodes, beginning a new path/area whenever one is encountered.
		 * this ordering assures that paths are eliminated from the puzzle before areas, which allows my solver to assume
		   anything found during step 2 is an area

	   For movement along a path, I generally move right if possible, then up or down (this is xor based on which type of cell you are in) 
	   and finally leftward. This is largely unimportant though, as long as the order is consistent, because of the above.
	*/
	void solve( ) ;
private:
	bool canMove( const CellHalf& half, int direction ) const ; // test if a "movement," meaning continuing on a path, is valid based on the current half and the desired direction
	void processResult( pair<int,bool> &result ) ;
	void examinePaths( int x, int y, bool isArea, int side=-1 ) ;
	pair<int,bool> solvePath( int x, int y, bool isArea, int side, char mark ) ;
	


} ;


ostream& operator<<( ostream& out, const BeCaMaze &m )  ;

