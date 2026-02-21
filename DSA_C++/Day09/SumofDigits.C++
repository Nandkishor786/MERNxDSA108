#include <bits/stdc++.h>
using namespace std;

int SumOfDigits(int n){
    
   n =abs(n);
  //if number -ve so make +ve
  int original =n,rem,sum=0;

  while(n>0){
    rem = n%10;
    sum +=rem;
    n /=10;
  }
  
  return  sum;
}

int main(){
  int n;

  cout<<"enter the number"<<endl;
  cin>>n;
 
  cout<<"SumOfDigits is " <<SumOfDigits(n)<<endl;


  return 0;
}