#include <iostream>
using namespace std;

int main() {
    int Array[10];

    cin>>Array[0]>>Array[1];

    for(int i = 2; i<10; i++){
        Array[i] = Array[i-2] + Array[i-1];
        if(Array[i] >= 10) {
            Array[i] = Array[i] % 10;
        }
    }

    for(int i = 0; i<10; i++){
        cout<<Array[i]<<" ";
    }

    return 0;
}