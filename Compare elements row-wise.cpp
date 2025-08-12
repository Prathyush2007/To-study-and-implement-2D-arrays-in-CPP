// Name  : Prathyuhs Nimmagaddda
// PRN   : 24070123064
// Batch : ENTC A3

#include <iostream>
using namespace std;

int main() {
    int c; 
    cout << "Enter number of columns: ";
    cin >> c;

    int arr[2][50];

    cout << "\nEnter elements of Row 1:\n";
    for (int j = 0; j < c; j++) {
        cout << "Row 1, Col " << j << ": ";
        cin >> arr[0][j];
    }

    cout << "\nEnter elements of Row 2:\n";
    for (int j = 0; j < c; j++) {
        cout << "Row 2, Col " << j << ": ";
        cin >> arr[1][j];
    }

    cout << "\nComparison (Row 1 vs Row 2):\n";
    for (int j = 0; j < c; j++) {
        if (arr[0][j] == arr[1][j])
            cout << "Column " << j << ": Both are equal\n";
        else if (arr[0][j] > arr[1][j])
            cout << "Column " << j << ": Value in Row 1 is greater\n";
        else
            cout << "Column " << j << ": Value in Row 2 is greater\n";
    }

    return 0;
}
