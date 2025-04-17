#include <iostream>
using namespace std;

int main() {
    int answer;

    while(true) {

        cin>>answer;

        if(answer < 25) {
            cout<<"Higher"<<endl;
        } else if (answer > 25) {
            cout<<"Lower"<<endl;
        } else {
            cout<<"Good"<<endl;
            break;
        }

    } 


    return 0;
}