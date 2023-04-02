#include<iostream>
using namespace std;

int main()
{
    cout<<"What is a Magical Number?"<<endl;
   cout<<"When the sum of all the given digits of a number and the reverse of that sum is multiplied, which is equal to the original number, and then the number is called a magic number."<<endl;
   cout<<endl;
   int n, temp, rev = 0, digit, sum_of_digits = 0;
   
   cout << "Enter a Number: \n";
   cin >> n;
   temp = n;
  
   while (temp > 0)
   {
      sum_of_digits = sum_of_digits + temp % 10;
      temp = temp / 10;
   }
  
    temp = sum_of_digits;
  
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if (rev * sum_of_digits == n)
    {
      cout << n << " is a Magic Number. " << endl;
    }
    else
    {
       cout << n << " is not a Magic Number. " << endl;
    }
    cout<<endl;
}