#include <iostream>
using namespace std;

int main() {

    int N;
    int a, b;

    cin>>N;

    for(int i = 0; i < N; i++ ) {
        int result = 0;
        cin>>a>>b;

        for(int j = a; j <= b; j++ ) {
            if(j % 2 == 0) {
                result += j;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}