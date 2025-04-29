#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int temp1, temp2;

    temp1 = c; // tmep = 7
    temp2 = b; // temp2 = 6
    b = a; // b = 5
    c = temp2; // c = 6
    a = temp1; // a = 7

    cout<<a<<endl<<b<<endl<<c;
    
    
    


    return 0;
}