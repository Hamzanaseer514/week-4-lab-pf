#include <iostream>

using namespace std;


void payable(string day,int totalPurchaseAmount);

main(){
string day;
int totalPurchaseAmount;
while(true){
cout<<"Enter the day : ";
cin>>day;
cout<<"Enter the amount : ";
cin>>totalPurchaseAmount;

payable(day,totalPurchaseAmount);
}

}
void payable(string day,int totalPurchaseAmount){
float payableAmount;
payableAmount = totalPurchaseAmount - 0.1*totalPurchaseAmount;
if (day == "sunday"){
cout<<"your payable amount is : "<<payableAmount<<endl;
}

if (day != "sunday"){

cout<<"Your payable amount is : "<<totalPurchaseAmount<<endl;
}



}