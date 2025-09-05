#include <iostream>
using namespace std;

void spiralmatrix(int mat[4][4], int n, int m) {
    int srow = 0;
    int scol = 0;
    int erow = n - 1;
    int ecol = m - 1;

    while (srow <= erow && scol <= ecol) {
        for (int i = scol; i <= ecol; i++) {
            cout << mat[srow][i] << " ";
        }
        for (int j = srow + 1; j <= erow; j++) {
            cout << mat[j][ecol] << " ";
        }
        if (srow < erow) {
            for (int i = ecol - 1; i >= scol; i--) {
                cout << mat[erow][i] << " ";
            }
        }
        if (scol < ecol) {
            for (int j = erow - 1; j >= srow+1; j--) {
                cout << mat[j][scol] << " ";
            }
        }
        srow++, scol++;
        erow--, ecol--;
    }
}

int main() {
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16},
                         };
    spiralmatrix(matrix, 4, 4);
}


