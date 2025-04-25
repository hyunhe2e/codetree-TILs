#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {0};
    int matrix2[3][3] = {0};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matrix2[i][j] = 3 * matrix[i][j];
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}