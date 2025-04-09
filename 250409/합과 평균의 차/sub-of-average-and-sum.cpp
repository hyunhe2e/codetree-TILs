#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int sum;
    double average;

    cin>>num1>>num2>>num3;
    sum = num1+num2+num3;
    average = (double)sum / 3;

    cout<<sum<<endl<<average<<endl<<sum-average;
    
    return 0;
}