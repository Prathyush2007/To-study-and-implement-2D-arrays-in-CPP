// Name  : Prathyush Nimmagadda
// PRN   : 24070123064
// Batch : ENTC A3

#include <iostream>
using namespace std;

int main() {
    int rA, cA, rB, cB;

    cout << "Rows and columns of Matrix A: ";
    cin >> rA >> cA;
    cout << "Rows and columns of Matrix B: ";
    cin >> rB >> cB;

    if (cA != rB) {
        cout << "\nMatrix multiplication not possible! Columns of A must equal rows of B.\n";
        return 0;
    }

    int a[50][50], b[50][50], res[50][50] = {0};

    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cA; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < rB; i++) {
        for (int j = 0; j < cB; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            for (int k = 0; k < cA; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "\nResult Matrix (" << rA << "x" << cB << "):\n";
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            cout << res[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
