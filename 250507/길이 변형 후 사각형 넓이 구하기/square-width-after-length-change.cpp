#include <iostream>
using namespace std;

int main() {
    int length, width; 

    cin >> width >> length;

    width += 8;
    length *= 3;

    cout<<width<<endl<<length<<endl<< width*length;
    return 0;
}