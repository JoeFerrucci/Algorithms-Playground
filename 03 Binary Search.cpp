/* Written by Joe Ferrucci - http://joeferrucci.info */
#include <iostream>
using namespace std;

void binsearch(int n, const int S[], int key, int& location) {
	int low = 0;
	int high = n;
	int mid;
	location = -1;
	
	while (low <= high && location == -1) {
		
		mid = (low + high) / 2;		// Divide
		
		if (key == S[mid])			// Then conquer!
			location = mid;
		else if (key < S[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	
}

int main(int argc, char *argv[]) {
	
	const int SIZE = 10;
	int sorted[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 33};
	
	int key = 3; //  should be @ location 2
	int location = -1;
	
	binsearch(SIZE, sorted, key, location);
	
	if (location != -1)
		cout << "Found at location: " << location;
	else
		cout << "Not found";
	
}