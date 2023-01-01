#include<iostream>
using namespace std;
void add(int number1,int number2);
void multiply(int number1,int number2);
void substract(int number1,int number2);
void divide(int number1,int number2);
main(){
int number1;
int number2;
char choice;
cout<<"Enter the number 1 :";
cin>>number1;
cout<<"Enter the number 2 :";
cin>>number2;
cout<<"Enter the operator :";
cin>>choice;
if (choice == '+') {
 add(number1,number2);
}
if (choice == '*') {
 multiply(number1,number2);
}
if (choice == '-') {
 substract(number1,number2);
}
if (choice == '/') {
 divide(number1,number2);
}
}
void add(int number1,int number2){
cout<<"The sum is :"<<number1+number2<<endl;
}
void multiply(int number1,int number2){
cout<<"The product is :"<<number1*number2<<endl;
}
void substract(int number1,int number2){
cout<<"The subtraction is :"<<number1-number2<<endl;
}
void divide(int number1,int number2){
cout<<"The division is :"<<number1/number2<<endl;
}



