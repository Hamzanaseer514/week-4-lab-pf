#include <iostream>

using namespace std;

void isEven(int answer);

main()
{
int number;
int answer;
 while(true) {
cout<<"Enter the number: ";
cin>>number;
answer = number%2;

isEven(answer); 

 }
}
 void isEven(int answer)
{
if (answer == 0)
  {
   cout<<"EVEN"<<endl;
  }
 if (answer != 0) 
  {
   cout<<"ODD"<<endl;

  }



}