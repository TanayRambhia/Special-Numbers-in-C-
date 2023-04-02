#include<iostream>
using namespace std;

int main()
{
   cout<<"What is a Factors Number?"<<endl;
   cout<<"Factors are those numbers that are multiplied to get a number.. "<<endl;
   cout<<"eg: 5 and 3 are factors of 15 "<<endl;
   cout<<endl;    
   
   int num = 20, i;
   cout << "The factors of " << num << " are : ";
   for(i=1; i <= num; i++)
   {
       if (num % i == 0)
       {
            cout << i << " ";   
       }
   }
}
   