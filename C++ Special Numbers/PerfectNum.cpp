#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Perfect Number?"<<endl;
    cout<<"A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself."<<endl;
    cout<<endl;
    
    int num,i,sum=0;
    
    cout<<"Enter a no: "<<endl;
    cin>>num;
    
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        cout<<num<<" is Perfect no"<<endl;
    }
    else
    {
        cout<<num<<" is not a Perfect no"<<endl;
    }
    cout<<endl;
}