#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Factorial Number?"<<endl;
    cout<<"A Factorial number is a product of all positive descending integers."<<endl;
    cout<<"eg: 5! = 5*4*3*2*1 = 120  "<<endl;
    cout<<endl;
    
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist."<<endl;
    }
    else 
    {
        for(int i = 1; i <= n; ++i) 
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial<<endl;    
    }
}