#include <iostream>

using namespace std;

int main() {
    int start, end;
    int cnt;

    cin >> start >> end;

    int flag = 0;

    for(int i = start; i <= end; i++) {
        cnt = 0;

        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                cnt ++;
            }
        }

        if(cnt == 3) {
                flag++;
            }
    }

    cout<<flag;

    return 0;
}
