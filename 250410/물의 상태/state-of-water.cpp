#include <iostream>
using namespace std;

int main() {
    int waterTemp = 0;

    cin>>waterTemp;
    
    if(waterTemp < 0) {
        cout<<"ice";
    } else if(waterTemp >= 100) {
        cout<<"vapor";
    } else {
        cout<<"water";
    }
    return 0;
}