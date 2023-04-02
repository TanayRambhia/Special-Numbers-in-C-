#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Spy Number"<<endl;
    cout<<"A number is said to be a Spy number if the sum of all the digits is equal to the product of all digits."<<endl;
    cout<<endl;
    
    int num,orig,sum=0,prod=1,rem=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    orig=num;
    
    while(num>0)
    {
        rem = num%10;
        num = num/10;
        sum = sum+rem;
        prod = prod*rem;
    }
    
    if(prod==sum)
    {
        cout<<orig<<" is Spy Number";
    }
    else
    {
        cout<<orig<<" is not a Spy Number";
    }
    cout<<endl;
}