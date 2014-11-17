/* Written by Joe Ferrucci - http://joeferrucci.info */
#include <iostream>
using namespace std;

int binaryIterative(int a[], int SIZE, int target) {
	int low = 0;
	int mid = 0;
	int high = SIZE;
	
	while (low != high) {
		
		mid = (low+high)/2;
		
		if (target == a[mid]) {
			return mid;
		}
		else if (target < a[mid]) {
			high = mid - 1;
		}
		else if (target > a[mid]) {
			low = mid + 1;
		}		
	}
	return 0;
}

int binaryRecursive(int a[], int low, int high, int target) {
	int mid;
	
	if (low > high) {
		return -1;
	}
	
	else {
		mid = (low+high)/2;
		if (target == a[mid]) {
			return mid;
		}
		
		else if (target < a[mid]) {
			return binaryRecursive(a, low, mid-1, target);
		}
		
		else {
			return binaryRecursive(a, mid+1, high, target);
		}
	}
}


int binarySearchRecursiveInterface(int a[], int SIZE, int target) {
	int low = 0;
	int mid = 0;
	int high = SIZE;

	mid = (low+high)/2;
	if (target == a[mid]) {
		return mid;
	}
	
	else if (target < a[mid]) {
		return binaryRecursive(a, low, mid-1, target);
	}
	
	else if (target > a[mid]) {
		return binaryRecursive(a, mid+1, high, target);
	}
}



int main(int argc, char *argv[]) {
	const int SIZE = 10;
	int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	cout << "Binary Iterative - Position: " << binaryIterative(array, SIZE, 10);
	
	cout << "\nBinary Recurive  - Position: " << binarySearchRecursiveInterface(array, SIZE, 3);
	
}