//Michael Weyman
//9-10-13
//Project 0

//Include statements
#include <iostream>
#include <ctime>
using namespace std; 

int main(){
	int size = 100000; // initialize size for array
	int sArray [ 100000 ]; // create array
	clock_t start = clock(); // start clock
	for(int i = 0; i < size; i++){  // insert numbers into array
		int num = rand();
		sArray[i] = num;
	}
	for( int j = 0; j < size - 1; j++){ // sort array
		if(sArray[j] > sArray[j + 1]){
			int temp = sArray[j];
			sArray[j] = sArray[j+1];
			sArray[j+1] = temp;
		}
	}
	clock_t end = clock(); // end clock
	double time = end - start; // get time
	cout << "time it took to sort: " << time << endl ; // print result
	return 0; // end program
}







