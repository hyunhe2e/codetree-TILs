#include <iostream>
using namespace std;

int main() {
    int h,w;
    double b;

    cin >> h >> w; // 키랑 몸무게 입력

    b = (10000 * w)/(h * h);

    cout << (int)b <<endl ;

    if(b >= 25) {
        cout<<"Obesity";
    }



    return 0;
}