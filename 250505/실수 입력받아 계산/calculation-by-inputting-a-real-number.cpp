#include <iostream>
using namespace std;

int main() {
    double a, b, sum;

    cin>>a>>b;

    cout<<fixed;
    cout.precision(2);

    sum = a + b;

    cout<<sum;
    return 0;
}