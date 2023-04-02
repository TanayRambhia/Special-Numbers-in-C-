#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Lucky Number? "<<endl;
    cout<<"Lucky numbers are subset of integers."<<endl;
    cout<<endl;
    
    int n,s=0,dig,a;
    cout<<"Enter a digit:"<<endl;
    cin>>a;
    
    while(n>a)
    {
        while(n!=0)
        {
            dig=n%10;
            s=s+dig;
            n=n/10;
        }
        n=s;
        s=0;
    }
    
    if(n==1)
    {
        cout<<"It is Lucky no"<<endl;
    }
    
    else
    {
        cout<<"It is not a Lucky No"<<endl;
    }
    cout<<endl;
}