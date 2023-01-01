#include <iostream>

using namespace std;

void maximum(int number1,int number2);
void minimum(int number1,int number2);
void equal(int number1,int number2);

main()
{
 int number1;
 int number2;
 int choice; 
 while(true)
 {
  cout<<"Enter the first number : ";
  cin>>number1;
  cout<<"Enter the second number : ";
  cin>>number2;
  cout<<"Enter your choice(1-3): ";
  cin>>choice;
  maximum(number1,number2);
  if (choice == 1)
   {
    maximum(number1,number2);
   }
  if (choice == 2)
   {
    minimum(number1,number2);
   }
  if (choice == 3)
   {
    equal(number1,number2);
   }
 }


}

void maximum(int number1,int number2)
{
 if (number1 > number2)
  {
   cout<<"Greatest number is "<<number1<<endl;
  }
  if (number2 > number1)
  {
    cout<<"greater number is "<<number2<<endl;
  }

}
void minimum(int number1,int number2)
{
  if (number1 > number2)
  {
    cout<<"smallest number is "<<number2<<endl;
  }
  if (number2 > number1)
  {
    cout<<"smallest number is "<<number1<<endl;
  }
}
void equal(int number1,int number2)
{
  if (number1 == number2)
  {

     cout<<"your number is same "<<endl;
  }


}