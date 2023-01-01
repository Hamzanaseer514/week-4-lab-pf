#include<iostream>
using namespace std;
void checkResult(int marks);

main(){
int marks;
cout<<"Enter the marks :";
cin>>marks;
checkResult(marks);


}
void checkResult(int marks){
if (marks >= 50){
   cout<<"PASSED"<<endl;
}
if (marks < 50){
   cout<<"Failed"<<endl;
}
}


