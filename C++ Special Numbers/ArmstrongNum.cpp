#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Armstrong Number?"<<endl;
    cout<<"A Armstrong number is a number where the sum of cube of its digit is equal to the orignal number."<<endl;
    cout<<"eg 153 is a Armstrong no.";
    cout<<endl;
    int a,num,n,s=0;
    
    cout<<"Enter a no: "<<endl;
    cin>>n;
    num=n;
    
    while(n>0)
    {
        a=n%10;
        s=s+(a*a*a);
        n=n/10;
    }
    if(num==s)
    {
        cout<<"The no is Armstrong"<<endl;
    }
    else
    {
        cout<<"The no is not Armstrong"<<endl;
    }
}