#include <iostream>
 
 using namespace std;

 int countoddDigits (int n ){
   if(n==0)
     return 0;
   else 
      return 1 + countoddDigits  (n/10)  ;
 }
 int sumoddDigits (int n ){
   if(n==0)
     return 0;
   else 
      return n%10 + sumoddDigits  (n/10)  ;
 }
 int  ProductoddDigits (int n ){
   if(n==0)
     return 1;
   else 
      return n % 10 *ProductoddDigits   (n/10)  ;
 }
int reverseoddDigits (int n ,int reversedNum){
   if(n==0)
     return reversedNum;
   else 
      return   reverseoddDigits (n/10,reversedNum * 10 + n % 10)  ;
 }
int main() { 
  go:
int num;
  cout<<"  number of Digits: ";
  cin>>num;
  if(num%2){
  cout<<"  number of odd Digits: "<<countoddDigits(num)<<endl;
  
  cout<<"   sum of Digits: " <<sumoddDigits(num)<<endl;
 
  cout<<"   product of Digits: " <<ProductoddDigits(num)<<endl;
    
     cout<<"   reversedNum : "<<reverseoddDigits(num,0)<<endl;
  }else{
    cout<<"No reasult"<<endl;
  }
