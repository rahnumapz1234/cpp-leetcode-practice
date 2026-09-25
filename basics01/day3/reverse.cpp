//reverse a number

#include<iostream>
using namespace std;

int main() {
    int n;
    int r=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n>0) {
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    cout<<"the reverse of the number is:"<<r;
    return 0;

}