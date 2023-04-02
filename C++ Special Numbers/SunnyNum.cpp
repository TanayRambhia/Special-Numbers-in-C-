#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Sunny Number"<<endl;
    cout<<"A  number is called a sunny number if the number next to the given number is a perfect square."<<endl;
    cout<<endl;
    
    int n;

    cout<<"Enter the number for check sunny number : ";
    cin>>n;

    double x;
    x = sqrt(n + 1);
    if((int)x == x)
    {
        cout<<n<<" is sunny Number";
    }
    else
    {
        cout<<n<<" is not sunny Number";
    }
    cout<<endl;
}