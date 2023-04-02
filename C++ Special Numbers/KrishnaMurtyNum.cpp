#include<iostream>
using namespace std;

int main()
{
   cout<<"What is a Krishnamurty Number?"<<endl;
    cout<<"A Krishnamurthy number is a number whose sum of the factorial of each digit is equal to the number itself."<<endl;
    cout<<endl;
    int num,orig,rem,prod,sum,i;
    
    cout<<"Enter a no: "<<endl;
    cin>>num;
    
    orig=num;
    
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        prod=1;
        
        for(i=1;i<=rem;i++)
        {
            prod*=i;
        }
        sum+=prod;
    }
    
    if(orig==sum)
    {
        cout<<orig<<" is Krishnamurty No"<<endl;
    }
    else
    {
        cout<<orig<<" is Krishnamurty No"<<endl;
    }
    cout<<endl;
}