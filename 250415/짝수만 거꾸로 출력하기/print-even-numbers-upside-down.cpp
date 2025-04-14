#include <iostream>
using namespace std;

int main() {
    int N;

    cin>>N;
    
    int num[N] = {0};

    for(int i = 0; i < N; i++) {
        cin>>num[i] ;
    }

    for(int i = N-1; i >= 0; i--) {
        if(num[i] % 2 == 0) {
            cout<<num[i]<<" ";
        }
    }










    return 0;
}