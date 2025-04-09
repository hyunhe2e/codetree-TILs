#include <iostream>
using namespace std;

int main() {
    int A, B;
    int sum; 
    double average;

    cin>>A>>B;
    sum = A+B;
    average = (double)sum / (double)2;

    cout<<fixed;
    cout.precision(1);

    cout<<sum<<" "<<average;


    return 0;
}