#include<iostream>
using namespace std;

bool CheckPrime(int n){
 bool IsPrime =true;

 for(int i=2;i<n;i++){
  if(n%i==0){
    IsPrime = false;
  }
 }
 return IsPrime;
}

int main(){
 
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;

  int count =0;
  for(int i=1;i<=n;i++){
      if(n%i==0){
        count++;
      }
  }
   if(count==2){
    cout<<"prime"<<endl;
   }
   else{
    cout<<"not prime"<<endl;
   }

   //functions
   bool IsPrime =CheckPrime(n);
   if(IsPrime)
   cout<<"Prime hai";
  else
  cout<<"Not Prime";
  return 0;
}