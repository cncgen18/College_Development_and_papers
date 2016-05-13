// Michael Weyman
// 9-10-13
// Project 0
// Vectors Sort

//Include statements
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int size = 100000; // size of vector
	vector < int > sVect (size); // create vector
	clock_t start = clock(); // start clock
	for(int i = 0; i < size; i++){ // insert rand num into vector
		int num = rand();
		sVect.push_back(num);
	}
	for(int j = 0; j < size - 1; j++){ // sort vector
		if( sVect.at(j) > sVect.at(j+1) ){
			int temp = sVect.at(j+1);
			sVect.at(j+1) = sVect.at(j);
			sVect.at(j) = temp;
		}
	}
	clock_t end = clock(); // end time
	double time = end - start; //  time it took
	cout << "time it took to sort: " << time << endl ; // print results
	return 0; // end program
}