#include <iostream>
using namespace std;

int main() {
    int A_math, A_Eng;
    int B_math, B_Eng;

    cin>>A_math>>A_Eng;
    cin>>B_math>>B_Eng;

    if(A_math > B_math && A_Eng > B_Eng) {
        cout<<1;
    } else {
        cout<<0;
    }

    return 0;
}