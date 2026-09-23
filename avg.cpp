//calculate aveage of 3 numbers

#include<iostream>
using namespace std;

int main() {
    double a,b,c;
    double avg;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"Enter third number:"<<endl;
    cin>>c;
    avg=(a+b+c)/3;
    cout<<"the average of "<<a<<" , "<<b<<" and "<<c<<" is: "<<avg<<endl;
    return 0;
}