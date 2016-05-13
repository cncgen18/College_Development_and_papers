
/*-----------------------------------------------------------------------
 Alex Kuhl - CSC 402 - Project 1 Solution
 
 Program that solves a "Be Ca Maze" as described in the project.

 This file is the main driver, instantiates mazes, solves, and prints.
**/

#include "BeCaMaze.h"
#include <string>
#include <cassert>

int main( )
{
	cout << "--= Original =--" << endl ;
	BeCaMaze m( "maze_orig.txt" ) ;
    m.print( ) ;
    cout << endl << m << endl ;
	m.solve( ) ;
	m.printSolution( ) ;
	cout << endl ;
	assert( m.getNumPaths( ) == 12 ) ;
	assert( m.getNumAreas( ) == 2 ) ;
	assert( m.getLargestArea( ) == 16 ) ;

	cout << endl << "--= Tweak =--" << endl ;
	BeCaMaze mt( "maze_tweak.txt" ) ;
	mt.solve( ) ;
	mt.printSolution( ) ;
	cout << endl ;
	assert( mt.getNumPaths( ) == 11 ) ;
	assert( mt.getNumAreas( ) == 1 ) ;
	assert( mt.getLargestArea( ) == 4 ) ;

	cout << endl << "--= Small =--" << endl ;
	BeCaMaze ms( "maze_small.txt" ) ;
	ms.solve( ) ;
	ms.printSolution( ) ;
	cout << endl ;
	assert( ms.getNumPaths( ) == 6 ) ;
	assert( ms.getNumAreas( ) == 0 ) ;
	assert( ms.getLargestArea( ) < 1 ) ;

	cout << endl << "--= Diamond =--" << endl ;
	BeCaMaze d( "maze_diamond.txt" ) ;
	d.solve( ) ;
	d.printSolution( ) ;
	cout << endl ;
	assert( d.getNumPaths( ) == 5 ) ;
	assert( d.getNumAreas( ) == 1 ) ;
	assert( d.getLargestArea( ) == 4 ) ;

	cout << endl << "--= Random =--" << endl ;
	BeCaMaze m2( 3, 3 ) ; // random maze
    //m.print( ) ;
	m2.solve( ) ;
	m2.printSolution( ) ;
	cout << endl ;

	cout << endl << "--= Copy =--" << endl ;
	BeCaMaze m3( m ) ;  // copy constructor test
	assert( m3.getNumPaths( ) == 12 ) ;
	assert( m3.getNumAreas( ) == 2 ) ;
	assert( m3.getLargestArea( ) == 16 ) ;
	m3.printSolution( ) ; // same as m

	cout << endl << "--= operator= =--" << endl ;
	m3 = m2 ; // operator= test
	assert( m2.getNumPaths( ) == m3.getNumPaths( ) ) ;
	assert( m2.getNumAreas( ) == m3.getNumAreas( ) ) ;
	assert( m2.getLargestArea( ) == m3.getLargestArea( ) ) ;
	m3.printSolution( ) ; // same as m2

	// test constness of some functions
	// output not important, just make sure this compiles with a const object
	// cannot call solve() because that should not be const
	cout << endl << "--= Const =--" << endl ;
	const BeCaMaze c( 5, 5 ) ;  // copy constructor
	c.getNumPaths( ) ;
	c.getNumAreas( ) ;
	c.getLargestArea( ) ;
	c.print( ) ;
	c.printSolution( ) ; 
	//c.solve( ) ;

	system( "PAUSE" ) ;
	return 0 ;
}