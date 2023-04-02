#include<iostream>
using namespace std;

int main()
{
   cout<<"What is a Reversible Number?"<<endl;
   cout<<"Reversible Number is a Number that after reversing it is equal to the orignal number."<<endl;
   cout<<"eg: 22"<<endl;
   cout<<endl;    
   
   int a,b,num,rem;
   cout<<"Enter a number: "<<endl;
   cin>>num;
  
   a= num / 10;
   b= num % 10;
   rem = b*10+a;
  
   if(num==rem)
   {
       cout<<num<<" is Reversible"<<endl;
   }
   else
   {
       cout<<num<<" is not Reversible"<<endl;
   }
}
   