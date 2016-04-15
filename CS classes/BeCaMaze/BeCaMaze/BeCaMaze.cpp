//Michael Weyman
//Project 1

#include <iostream>
#include <string>
#include <fstream>
#include "Cell.cpp"

using namespace std ;

class Maze{
	Cell maze[6][4];
	int numberOfPaths;
public:

	Maze(){numberOfPaths = 0;}

	void setMaze(char slash,int col,int row){
		maze[col][row].setValue(slash);
	}

	void print(){
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 6; j++){
				cout << maze[j][i].getValue();
				if(j==5)
					cout << endl;
			}
		}
	}

	void operator<<(Maze pmaze){
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 6; j++){
				cout << pmaze.maze[j][i].getValue();
				if(j==5)
					cout << endl;
			}
		}
	}

	void solve(int x, int y, bool newPath, int pathSymbol){
		if(maze[x][y].getValue() == '/'){
			if(newPath){
				pathSymbol++;
				maze[x][y].setRight((char)pathSymbol);
				numberOfPaths++;
				}
			else
				maze[x][y].setLeft((char)pathSymbol);
			if(x+1 > 5)
				solve(0,y+1,true,pathSymbol);
			else if(maze[x+1][y].getValue() == '\\' )
				solve(x+1,y,false,pathSymbol);
			else if(maze[x][y+1].getValue() == '\\' )
				solve(x,y+1,false,pathSymbol);
			else if(maze[x-1][y+1].getValue() == '/' )
				solve(x-1,y+1,false,pathSymbol);
			else if(x-1 < 0)
				solve(x+1,y,true,pathSymbol);
			else if(maze[x-1][y].getValue() == '\\' )
				solve(x-1,y+1,false,pathSymbol);
			else
				solve(x+1,y,true,pathSymbol);
		}
		if(maze[x][y].getValue() == '\\'){
			if(newPath){
				pathSymbol++;
				maze[x][y].setRight(pathSymbol);
				numberOfPaths++;
				}
			else
				maze[x][y].setLeft(pathSymbol);
			if(x+1 > 5)
				solve(0,y+1,true,pathSymbol);
			else if(maze[x+1][y].getValue() == '/' )
				solve(x+1,y,false,pathSymbol);
			else if(maze[x][y+1].getValue() == '/' )
				solve(x,y+1,false,pathSymbol);
			else if(maze[x-1][y+1].getValue() == '\\' )
				solve(x-1,y+1,false,pathSymbol);
			else if(x-1 < 0)
				solve(x+1,y,true,pathSymbol);
			else if(maze[x-1][y].getValue() == '/' )
				solve(x-1,y+1,false,pathSymbol);
			else
				solve(x+1,y,true,pathSymbol);
		}
	}

	void printSolution(){
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 6; j++){
				cout << maze[j][i].getLeft() << maze[j][i].getValue() << maze[j][i].getRight();
				if(j==5)
					cout << endl;
			}
		}
	}

	int getNumPaths(){ return numberOfPaths; }

};

int main(){
	Maze beca;
	ifstream ifs( "maze.txt" ) ; 
	char x = NULL;
	ifs >> x;
	ifs >> x;
	for(int i = 0; i < 4; i++){
			for(int j = 0; j < 6; j++){
				ifs >> x;
				beca.setMaze(x,j,i);
			}
	}
	beca.print();
	beca.solve(0,0,true,0);
	cout << "number of Paths: " << beca.getNumPaths() << endl;
	beca.printSolution();
	return 0;
}