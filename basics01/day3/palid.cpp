#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num<0) {
        cout<<num<<" is not a palidrom"<<endl;
    }
    int orignum=num;
    long long reversenum=0;

    while(num>0) {
        reversenum*=10;
        reversenum=(num%10)+reversenum;
        num=num/10;
    }
    if(reversenum==orignum) {
        cout<<orignum<<" is a palidrome number."<<endl;
    }
    else{
        cout<<orignum<<" is not a palidrome number."<<endl;
    }
    return 0;
}