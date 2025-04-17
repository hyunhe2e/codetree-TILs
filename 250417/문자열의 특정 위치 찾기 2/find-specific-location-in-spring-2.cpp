#include <iostream>
using namespace std;

int main() {
    string words[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char user; 
    int cnt = 0;

    cin>>user;

    for(int i = 0; i < 5; i++) {
        if(words[i][2] == user || words[i][3] == user) {
            cnt++;
            cout<<words[i]<<endl;
        }
    }

    cout<<cnt;

    return 0;
}