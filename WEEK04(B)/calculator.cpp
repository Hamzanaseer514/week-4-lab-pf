#include <iostream>

using namespace std;

void add(int number1,int number2);
void multiply(int number1,int number2);
void substract(int number1,int number2);
void divide(int number1,int number2);

main()
{
 int number1;
 int number2;
 char operator;
 while(true)
  {
    cout<<"Enter the first number : ";
    cin>>number1;
    cout<<"Enter the second number : ";
    cin>>number2;
    cout<<"Enter the operator(-,+,/,*) : ";
    cin>>operator;
    
    add(number1,number2);
    multiply(number1,number2);
    substract(number1,number2);
    divide(number1,number2);  



  }
}
void add(int number1,int number2)
{
 if (operator=='+')
  {
   cout<<"The sum is : "<<number1+number2<<endl;
  }
}
void multiply(int number1,int number2)
{
 if (operator=='*')
  {
   cout<<"The multiply is : "<<number1*number2<<endl;
  }
}
void substract(int number1,int number2)
{
 if (operator=='-')
  {
   cout<<"The substraction is : "<<number1-number2<<endl;
  }
}
void divide(int number1,int number2)
{
 if (operator=='/')
  {
   cout<<"The division is : "<<number1/number2<<endl;
  }
}