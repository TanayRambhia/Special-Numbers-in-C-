#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Palindrome Number"<<endl;
    cout<<"A palindrome number is a number that is same after reverse."<<endl;
    cout<<endl;
    
    int n,r,sum=0,temp;    
    cout<<"enter the number="<<endl;    
    cin>>n;    
    temp=n;    
    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    
    if(temp==sum)   
    {
        cout<<"It is a Palindrome Number "<<endl;       
    }
    
    else    
    {
        cout<<"It is not a Palindrome Number"<<endl;      
    }
    cout<<endl;
}