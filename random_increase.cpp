#include <iostream>
#include <vector>
#include <stdlib.h> 
#include <math.h> 
#include <fstream>


using namespace std;




void write_infile(ofstream& writer, int* Arr, int n){
	for(int i = 0; i < n; i++){
		writer<<Arr[i]<<endl;
	
	}
	
}


int main(){
	ofstream writer("input_increase.txt", ofstream::app);
	int n = pow(10, 2);
	writer<<n<<endl;
	int* Arr = new int[n];

	for(int i = 0; i < n; i++){
		Arr[i] = i;
	}

	write_infile(writer, Arr, n);
	writer.close();
}
