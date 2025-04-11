#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    int first, second;

    cin>>A>>B>>C;

    if(A > B) {
        if( A < C) {  
            cout<<A;
        } else if (B > C) {
            cout<<B;
        } else {
           cout<<C;
        }
    } else { // A < B가 전제조건. 
    if (B < C) {
        cout<<B;
    } else if(A > C) {
        cout<<A;
    } else { //  B > C > A
    cout<< C;
    }

    }

    return 0;
}