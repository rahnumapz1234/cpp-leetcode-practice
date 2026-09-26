#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a positive integer:";
    cin>>n;

    if(n<=1) {
        cout<<n<<" is not a prime number."<<endl;
    }

    bool isprime=true;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            isprime=false;
            break;
        }
    }
    if(isprime) {
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}