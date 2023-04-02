#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Neon Number?"<<endl;
    cout<<"A neon number is a number where the sum of digits of square of the number is equal to the number."<<endl;
    cout<<"eg 6 is a Neon no.";
    cout<<endl;
    
    int n,sum,num,sq,d;
    cout<<"Enter a no: "<<endl;
    cin>>n;
    
    sum=0;
    num=n;
    sq=n*n;
    
    do
    {
        d= sq%10;
        sum+=d;
        sq/=10;
    }while(sq==0);
    
    if(num==sum)
    {
        cout<<"It is a Neon no"<<endl;
    }
    else
    {
        cout<<"It is not a Neon no"<<endl;
    }
}