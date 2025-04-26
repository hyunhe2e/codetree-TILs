#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {0};
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < 4; i++) {
        int total = 0;
        for(int j = 0; j < 4; j++) {
            total += matrix[i][j];
        }
        cout << total << endl;
    }


    return 0;
}