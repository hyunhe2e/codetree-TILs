#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cin>>num1>>num2;

    if(num1 < num2) {
        cout<<true<<" ";
    } else {
        cout<<false<<" ";
    } 

    if(num1 == num2) {
        cout<<true;
    } else {
        cout<<false;
    }

    return 0;
}