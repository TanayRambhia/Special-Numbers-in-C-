#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Buzz Number?"<<endl;
    cout<<"A number is said to be Buzz Number if it ends with 7 OR is divisible by 7."<<endl;
    cout<<endl;
   
    int num;
    cout<<"Enter a num: "<<endl;
    cin>>num;
  
    if(num%7==0 || num%10==7)
    {
        cout<<num<<" is a Buzz no"<<endl;
    }
    else
    {
       cout<<num<<" is not a Buzz no"<<endl;
    }
    cout<<endl;
}