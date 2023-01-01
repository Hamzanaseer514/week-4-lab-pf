#include <iostream>

using namespace std;

void calculateBill(string day,int totalPurchaseAmount);

main()
{
 string day;
 int totalPurchaseAmount;
 while(true)
 {
  cout<<"Enter the day : ";
  cin>>day;
  cout<<"Enter the amount : ";
  cin>>totalPurchaseAmount;
  calculateBill(day,totalPurchaseAmount);

 }
}
void calculateBill(string day,int totalPurchaseAmount)
{
   float payableAmount;
   payableAmount = totalPurchaseAmount - 0.1*totalPurchaseAmount;
   float amount;
   amount = totalPurchaseAmount - 0.05*totalPurchaseAmount;
  if (day == "sunday")
  {
  cout<<"Your payable amount is : "<<payableAmount<<endl;
  }

  if (day != "sunday")
  {
cout<<"your payable amount is : "<<amount<<endl;
  }
}