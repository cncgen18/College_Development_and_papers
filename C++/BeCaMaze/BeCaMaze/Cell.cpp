//Michael Weyman
//Project1
#include <iostream>
#include <string>
#include <sstream>

using namespace std ;

class Cell{
	char value;
	char LPath;
	char RPath;

public:
	Cell(){value = NULL; LPath = NULL; RPath = NULL;}
	void setValue(char val){ value = val; }
	void setLeft(char Left){ LPath = Left; }
	void setRight(char right){ RPath = right; }
	char getValue() const {return value;}
	char getLeft() const {return LPath;}
	char getRight() const {return RPath;}


};
