#include<iostream>
using namespace std;
void add(int number1,int number2);
main(){
int number1,number2;
cout<<"Enter the first number :";
cin>>number1;
cout<<"Enter the second number :";
cin>>number2;
add(number1,number2);

}
void add(int number1,int number2) {
  int sum = number1 + number2;
 cout<<"sum is :"<<sum<<endl;
}