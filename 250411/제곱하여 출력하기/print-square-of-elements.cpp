#include <iostream>
using namespace std;

int main() {
    int N_num;

    cin>>N_num;

    int N[N_num] = {0};
    
    for(int i = 0; i < N_num; i++) {
        cin>>N[i];
    }

    for(int i = 0; i < N_num; i++) {
        cout<<N[i] * N[i]<<" ";
    }






    return 0;
}