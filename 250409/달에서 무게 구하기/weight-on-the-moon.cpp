#include <iostream>
using namespace std;

int main() {
    int weight;
    double rate;

    weight = (double)13;
    rate = 0.165;

    cout<<fixed;
    cout.precision(6);

    cout<<weight<<" * "<<rate<<" = "<<(double)weight*rate;
    return 0;
}