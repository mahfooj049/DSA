#include <bits/stdc++.h>
using namespace std;
int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;
    if (c1 != r2) {
        cout << "Matrix multiplication is not possible!";
        return 0;
    }
    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c2] = {};
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Result Matrix
    cout << "Resultant Matrix:\n";

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}