/* Written by Joe Ferrucci - http://joeferrucci.info */
#include <iostream>
using namespace std;

void matrixmult(int n, const int A[][2], const int B[][2], int C[][2]) {
	for (int i = 0; i != n; i++) {
		for (int j = 0; j != n; j++) {
			C[i][j] = 0;
			for (int  k = 0; k != n; k++) {
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
}

int main(int argc, char *argv[]) {
	const int N = 2;
	int a [N][N] = {{2,3},{4,1}};
	int b [N][N] = {{5,7},{6,8}};
	int c [N][N] = {0};
	
	cout << "C[][] before:\n";
	for (int i = 0; i != N; i++) {
		for (int j = 0; j != N; j++) {
			cout << " " << c[i][j];
		}
		cout << "\n";
	}
	cout << "\n";
	
	matrixmult(N, a, b, c);

	cout << "C[][] after:\n";
	for (int i = 0; i != N; i++) {
		for (int j = 0; j != N; j++) {
			cout << " " << c[i][j];
		}
		cout << "\n";
	}	
	
}