#include <iostream>
using namespace std;

int main() {

    int N; 
    int cnt = 1;

    cin >> N;
    
    for(int i = 0; i < N; i++) {
        int row[N];

        if(i % 2 == 0) {
            for(int j = 0; j <N; j++) {
                row[j] = cnt;
                cout<<row[j];
                cnt++;
            }
        } else {
            for(int j = 0; j < N; j++) {
                cnt--;
                row[j] = cnt;
                cout<<row[j];
            }
        }
        cout <<"\n";
    }

    return 0;
}