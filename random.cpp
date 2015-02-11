#include <iostream>
#include <vector>
#include <stdlib.h> 
#include <math.h> 
#include <fstream>


using namespace std;


void generate_random(int* A, int n){

	srand(time(0));//initialize random seed
	for(int i = 0; i < n; i++){
		A[i] = rand();
	}
	
}

void write_infile(ofstream& writer, int* Arr, int n){
	for(int i = 0; i < n; i++){
		writer<<Arr[i]<<endl;
	
	}
	
}


int main(){
	ofstream writer("input_array.txt", ofstream::app);
	int n = pow(10, 2);
	writer<<n<<endl;
	int* Arr = new int[n];
	generate_random(Arr, n);
	write_infile(writer, Arr, n);
	writer.close();
}
