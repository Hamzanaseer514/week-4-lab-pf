#include<iostream>
using namespace std;
void printName(string userName);
main(){
string userName;
while(true){
cout<<"Enter your name :";
cin>>userName;
printName(userName);}

}
void printName(string userName){
  cout<<"your name is "<<userName<<endl;
}