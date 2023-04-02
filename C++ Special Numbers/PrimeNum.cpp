#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Prime Number?"<<endl;
    cout<<"A Prime number is prime if it's divisible only by one and itself."<<endl;
    cout<<endl;
    
    int num,i,count=0;
    cout<<"Enter a no: "<<endl;
    cin>>num;
    
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<num<<" is Prime No"<<endl;
    }
    else
    {
        cout<<num<<" is not a Prime No"<<endl;
    }
    cout<<endl;
}