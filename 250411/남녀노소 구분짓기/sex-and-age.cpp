#include <iostream>
using namespace std;

int main() {
    int gender, age;

    cin>>gender;
    cin>>age;

    if(age >= 19) {
        if(gender == 1) {
            cout<<"WOMAN";
        } else {
            cout<<"MAN";
        }
    } else {
        if(gender == 1) {
            cout<<"GIRL";
        } else {
            cout<<"BOY";
        }
    }
    return 0;
}