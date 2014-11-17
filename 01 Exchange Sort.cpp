/* Written by Joe Ferrucci - http://joeferrucci.info */
#include <iostream>

using namespace std;

void exchangesort(int S[], int size) {
	for (int i = 0; i != size; i++) {
		for (int j = i+1; j != size; j++) {
			if ( S[j] < S[i])
			{
				int temp = S[j];
				S[j] = S[i];
				S[i] = temp;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	
	int SIZE = 10;
	int A[] = {3,1,2,6,4,33,5,9,7,8,};
	
	cout << "Before sort:\t";
	for (int i = 0; i != SIZE; i++) {
		cout << " " << A[i];
	}
	
	exchangesort(A,SIZE);
	
	cout << "\nAfter sort:\t\t";
	for (int i = 0; i != SIZE; i++) {
			cout << " " << A[i];
		}
	
}