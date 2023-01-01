#include<iostream>
using namespace std;
void even(int number);
void odd(int number);
main(){
int number;
int answer;
while(true) {
cout<<"Enter a number :";
cin>>number;
answer = number%2;
if (answer == 0) {
 even(number);
}
if (answer != 0) {
 odd(number);
}

}}
void even(int number){

cout<<"The number is Even."<<endl;
}
void odd(int number){
cout<<"The number is odd."<<endl;
}
