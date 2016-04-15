/*-----------------------------------------------------------------------
 Alex Kuhl - CSC 402 - Project 1 Solution - Implementation of Cell.h
**/

#include "Cell.h"

Cell::Cell( int x, int y, char wall )
	: x( x ), y( y ), wall( wall )
{ 
	// the wall character determines the sort of halves the Cell contains
	// left-bottom, right-top, etc.
	switch( wall )
	{
	case '\\':
		left  = CellHalf( x, y, LB ) ;
		right = CellHalf( x, y, RT ) ;
		break ;
	case '/':
		left  = CellHalf( x, y, LT ) ;
		right = CellHalf( x, y, RB ) ;
		break ;
	}
}

CellHalf& Cell::getLeft( ) 
{
	return left ;
}

const CellHalf& Cell::getLeft( ) const
{
	return left ;
}

CellHalf& Cell::getRight( )
{
	return right ;
}

const CellHalf& Cell::getRight( ) const
{
	return right ;
}

CellHalf& Cell::getTop( )
{
	if( wall == '\\' )
		return right ;
	else
		return left ;
}

const CellHalf& Cell::getTop( ) const
{
	if( wall == '\\' )
		return right ;
	else
		return left ;
}

CellHalf& Cell::getBottom( )
{
	if( wall == '\\' )
		return left ;
	else
		return right ;
}

const CellHalf& Cell::getBottom( ) const
{
	if( wall == '\\' )
		return left ;
	else
		return right ;
}

CellHalf& Cell::getSide( int side )
{
	switch( side )
	{
	case LEFT:
		return getLeft( ) ;
	case RIGHT:
		return getRight( ) ;
	case TOP:
		return getTop( ) ;
	default: // BOTTOM
		return getBottom( ) ;
	}
}

const CellHalf& Cell::getSide( int side ) const
{
	switch( side )
	{
	case LEFT:
		return getLeft( ) ;
	case RIGHT:
		return getRight( ) ;
	case TOP:
		return getTop( ) ;
	default: // BOTTOM
		return getBottom( ) ;
	}
}

void Cell::markVisited( int side )
{
	switch( side )
	{
	case TOP:
		getTop( ).markVisited( ) ;
		break ;
	case BOTTOM:
		getBottom( ).markVisited( ) ;
		break ;
	case LEFT:
		left.markVisited( ) ;
		break ;
	case RIGHT:
		right.markVisited( ) ;
		break ;
	}
}

char Cell::getWall( ) const
{
	return wall ;
}







