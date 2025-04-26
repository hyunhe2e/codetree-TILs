#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {0};
    int total = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < 4; i++ ) {
        for(int j = 0; j <= i; j++ ) {
            total += matrix[i][j];
        }
    }

    cout << total;

    //(0,0) + (1,0) + (1,1) + (2,0) + (2,1) + (2,2) + ...
    // -> 자기 행만큼 더함. 


    return 0;
}