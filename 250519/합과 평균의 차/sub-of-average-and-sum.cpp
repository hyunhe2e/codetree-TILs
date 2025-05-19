#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    int sum =0, average =0;
    cin >> A >> B>>C;

    sum = A+B+C;
    average = (A+B+C)/3;

    cout<<sum<<endl;
    cout<<average<<endl;
    cout<<sum - average;
    
    return 0;
}