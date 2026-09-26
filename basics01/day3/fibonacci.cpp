//fibonacci series

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of terms:";
    cin>>n;
    int a=0;
    int b=1;
    for(int i=0; i<n; i++){
    if(i==0 )
        cout<<"0 ";
       else if(i==1)
        cout<<"1 ";
        else{
            int curr=a+b;
            cout<<curr<<" ";
            a=b;
            b=curr;
        }
    }
    return 0;
}