#include <iostream>
using namespace std;

int main() {
    int N, M; 
    cin >> N >> M;

    int matrix1[N][M] = {0};
    int matrix2[N][M] = {0};
    int new_matrix[N][M] = {0};

    // 배열 입력문.
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> matrix1[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(matrix1[i][j] == matrix2[i][j]) {
                new_matrix[i][j] = 0;
            } else {
                new_matrix[i][j] = 1;
            }
            cout << new_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}