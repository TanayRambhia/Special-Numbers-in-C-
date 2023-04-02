#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Niven Number?"<<endl;
    cout<<"A Niven number is a number if it is divisble by the sum of the digits."<<endl;
    cout<<"eg 126 is a Niven no."<<endl;
    cout<<endl;
    
    int n,sum=0,dig,n1;
    
    cout<<"Enter a no: "<<endl;
    cin>>n;
    
    n1=n;
    while(n1>0)
    { 
        dig=n1%10;
        n1/=10;
        sum+=dig;
    }
    if((n%sum)==0)
    {
        cout<<"It is a niven no"<<endl;
    }
    else
    {
        cout<<"It is not a niven no"<<endl;
    }
}