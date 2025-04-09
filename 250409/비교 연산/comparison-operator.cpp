#include <iostream>
using namespace std;

int main() {
    int A, B;
    int Q1, Q2, Q3, Q4, Q5, Q6;

    cin>>A>>B;

    Q1 = A >= B;
    Q2 = A > B;
    Q3 = B >= A;
    Q4 = B > A;
    Q5 = A == B;
    Q6 = A != B;

    cout<<Q1<<endl<<Q2<<endl<<Q3<<endl<<Q4<<endl<<Q5<<endl<<Q6;
    return 0;
}