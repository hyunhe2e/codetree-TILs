#include <iostream>
using namespace std;

int main() {
    int N = 0;

    cin>>N;

    if(N < 1000) {
        cout<<"no";
    } else if (N >= 3000) {
        cout<<"book";
    } else {
        cout<<"mask";
    }

    return 0;
}