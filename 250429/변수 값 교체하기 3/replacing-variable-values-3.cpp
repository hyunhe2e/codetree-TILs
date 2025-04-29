#include <iostream>
using namespace std;

int main() {
    int a =3, b = 5;
    int temp;

    temp = a; // temp = 3
    a = b; // a = 5
    b = temp; // b = 3

    cout<<a<<endl<<b;

    return 0;
}