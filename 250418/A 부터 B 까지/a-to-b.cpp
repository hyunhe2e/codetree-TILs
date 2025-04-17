#include <iostream>
using namespace std;

int main() {
    int A, B;
    
    cin>>A>>B;

    while(true) {

        if(A > B) {
            break;
        }

        cout<<A<<" ";

        if(A % 2 != 0) {
            A = A * 2;
        } else {
            A = A + 3;
        }

    }

    return 0;
}