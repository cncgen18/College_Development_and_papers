/*-----------------------------------------------------------------------
 Alex Kuhl - CSC 402 - Project 1 Solution
 
 Implementation of Cell and CellHalf. These classes represent the cells
 of a Be Ca Maze. If you look at the maze, it consists of a grid whose
 cells contain either a / or a \. My Cell interprets the grid cells as
 containing two halves (as CellHalf instances): 
	/	left-top and right-bottom halves
	\	left-bottom and right-top halves

 These classes have unused functions, like Cell::markVisited
**/


#pragma once

						// types of CellHalfs, could do this as an enum as well
const int IV = 0,		// invalid, placeholder for temporary CellHalfs
	      LT = 1,		// left-top
	      LB = 2,		// left-bottom
		  RT = 3,		// right-top
		  RB = 4,		// right-bottom

          LEFT   = 5,	// movements/positions of a CellHalf
		  RIGHT  = 6,

		  UP   = 7,		// movements of a CellHalf
		  DOWN = 8,
		   
		  TOP    = 9,	// positions of a CellHalf
		  BOTTOM = 10 ;

// Short class to represent one side of a Cell, which has two halves of course
// The function implementations should really be in the .cpp file,
// but they were short so I left them here.
class CellHalf
{
	int  type, x, y ;
	bool visited ;  
	mutable char marker ;

public:
	CellHalf( int x=-1, int y=-1, int type=IV, char ch='*' )
		: x( x ), y( y ), type( type ), visited( false ), marker( ch )
	{ }

	bool CellHalf::isTop( )				const { return type == LT || type == RT ; }
	bool CellHalf::isBottom( )			const { return type == LB || type == RB ; }
	bool CellHalf::isRight( )			const { return type == RT || type == RB ; }
	bool CellHalf::isLeft( )			const { return type == LT || type == LB ; }
	char CellHalf::getMarker( )			const { return marker ; }
	int  CellHalf::getX( )				const { return x ; }
	int  CellHalf::getY( )				const { return y ; }
	int  CellHalf::getType( )			const { return type ; }
	bool CellHalf::isVisited( )			const { return visited ; }
	void CellHalf::setMarker( char m )	const { marker = m ; } // technically a mutator, but 'marker' is set as mutable

	void CellHalf::markVisited( )			  { visited = true ; }
	
} ;
		  
class Cell
{
private:
	int x, y ;				// 0-based indexing of grid cells
	char wall ;				// representation of the diagonal the Be Ca Maze's grid contained: \ or /
	CellHalf left, right ;	// I think of halves as left or right
							// Top or bottom can be figured out based on whether 
							// you are left/right and what the wall character is

public:
	Cell( int x, int y, char wall ) ;

	// these are true accessors, never used in this program
	const CellHalf& getLeft( )			const ;
	const CellHalf& getRight( )			const ;
	const CellHalf& getTop( )			const ;
	const CellHalf& getBottom( )		const ;
	const CellHalf& getSide( int side ) const ;

	// "accessors" used by the solver because CellHalfs keep track of whether they
	// have been visited by the solver, thus they are really mutators
	CellHalf& getLeft( ) ;
	CellHalf& getRight( ) ;
	CellHalf& getTop( ) ;
	CellHalf& getBottom( ) ;
	CellHalf& getSide( int side ) ;

	void markVisited( int side ) ;	// shortcut function, figures out which CellHalf (TOP, BOTTOM, LEFT, RIGHT)
									// side represents and calls its markVisited

	char getWall( ) const ;			// return the wall character
} ;
