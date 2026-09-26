//print primes from 1 to n

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<"the prime numbers between 1 to "<<n<<" are:"<<endl; 
    for(int i=2; i<=n; i++) {
        bool isprime=true;
        for(int j=2; j*j<=i; j++) {
            if(i%j==0) {
                isprime=false;
                break;
            }
        }
        if(isprime) {
            cout<<i<<" ";
        }
    }
    return 0;

}
