 #include <iostream>
 
 using namespace std;

void printNumbers(int n){
  if(n>0){
    if(n!=0)
      if(n% 2 !=0)
    cout<<n<<" ";
    printNumbers(n-1);
  }
    
    
}


int main() { 
int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<"The numbers from -2 to "<<num<<"  : ";
  printNumbers(num);
 cout<<endl;




  
  return 0;
}
