#include <iostream>

using namespace std;

void greaterLesser(int number1,int number2);

main(){
int number1;
int number2;

cout<<"Enter your first number :";
cin>>number1;
cout<<"Enter your second number :";
cin>>number2;
greaterLesser(number1,number2);
}

void greaterLesser(int number1,int number2){
if (number1>number2){
cout<<"Greater no is : "<<number1;

}
if (number2>number1){
cout<<"Greater no is : "<<number2;
}
}



