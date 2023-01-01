#include <iostream>

using namespace std;


main(){
string day;
int totalPurchaseAmount;
while(true){
cout<<"Enter the day : ";
cin>>day;
cout<<"Enter the amount : ";
cin>>totalPurchaseAmount;
float payableAmount;
payableAmount = totalPurchaseAmount - 0.1*totalPurchaseAmount; 

if (day == "sunday"){
cout<<"Your payable amount is : "<<payableAmount<<endl;
}

if (day != "sunday"){
cout<<"your payable amount is : "<<totalPurchaseAmount<<endl;


}
}




}