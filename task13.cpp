#include<iostream>
using namespace std;
void data(int weight);
main(){
float weight;
cout<<"Enter weight you want to lose :";
cin>>weight;
data(weight);
}
void data(int weight){
int day = weight*15;
cout<<"It will takes your"<<day<<" days to loose"<<weight<<"kgs";


}