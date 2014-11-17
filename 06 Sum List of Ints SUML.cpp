/* Written by Joe Ferrucci - http://joeferrucci.info */
#include <iostream>
using namespace std;

int suml(int arr[], int SIZE) {
	if (SIZE == 0) {
		return 0;
	} 
	
	else {
		// copy array[1...n]
		int* arr2 = new int[SIZE-1];
		for (int i = 0; i != SIZE; i++) {
			arr2[i] = arr[i+1];
		}
		return arr[0] + suml(arr2, SIZE-1);
	}
}

int main(int argc, char *argv[]) {
	const int SIZE = 3;
	int myArray[SIZE] = {8, 7, 6};
	
	cout << "Total = " << suml(myArray, SIZE);
}