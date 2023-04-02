#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Automorphic Number?"<<endl;
    cout<<"A Automorphic number is a number if and only if the square of the given number ends with the same number itself."<<endl;
    cout<<"eg 25, 76  is a Automorphic no."<<endl;
    cout<<endl;
    
    int number,flag=0;
        cout<<"Enter a positive number to check: ";
       
        cin>>number;
        int square= number*number;
        int temp=number;
       
        while(number>0)
        {
            if(number%10!=square%10)
            {    
                        flag=1;
                        break;
                    }
            number=number/10;
            square=square/10;
        }
        if(flag==1)
        {
            cout<<temp<<" is not an Automorphic number."<<endl;
        }
        else
        {
             cout<<temp <<" is an Automorphic number."<<endl;
        }
}