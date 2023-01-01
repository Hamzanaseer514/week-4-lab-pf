#include<iostream>
using namespace std;
void displayDetail(string name,int marks,float aggregate,char section);
main(){
string name;
int marks;
float aggregate;
char section;
cout<<"Enter your name :";
cin>>name;
cout<<"Enter your marks :";
cin>>marks;
cout<<"Enter your aggregate :";
cin>>aggregate;
cout<<"Enter your section :";
cin>>section;
displayDetail(name,marks,aggregate,section);
}
void displayDetail(string name,int marks,float aggregate,char section){
cout<<"Your name is :"<<name<<endl;
cout<<"Your marks is :"<<marks<<endl;
cout<<"Your aggregate is :"<<aggregate<<endl;
cout<<"Your section is :"<<section<<endl;


}

