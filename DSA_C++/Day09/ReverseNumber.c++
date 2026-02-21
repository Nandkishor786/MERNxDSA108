#include <bits/stdc++.h>
using namespace std;

int ReversNum (int n){
    
  // isNegative
  bool isNegative =false;
  if(n<0){
    isNegative =true;
    n =abs(n);
  }
   int original =n,rem ,rev=0;
  while(n>0){
    rem = n%10;
    rev = rev*10+rem;
    n /=10;
  }
  
  if(isNegative)
  return -rev;

  return rev;
}

int main(){
  int n;

  cout<<"enter the number"<<endl;
  cin>>n;
 
  cout<<"ReversNumber is " <<ReversNum(n)<<endl;

  return 0;
}