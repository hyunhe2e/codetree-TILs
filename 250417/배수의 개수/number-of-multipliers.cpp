#include <iostream>
using namespace std;

int main() {
    int nums[10] = {0};
    int cnt_3=0, cnt_5 = 0;

    for(int i = 0; i<10; i++) {
        cin>>nums[i];
    }

    for(int i = 0; i<10; i++) {
        if( nums[i] % 3 == 0 ) {
            cnt_3 ++;
        } 
        if (nums[i] % 5 == 0 ) {
            cnt_5 ++;
        }
    }

    cout<<cnt_3<<" "<<cnt_5;

    return 0;
}