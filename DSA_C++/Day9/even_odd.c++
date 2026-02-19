#include <bits/stdc++.h>
using namespace std;
 
bool CheckEvenOdd(int n){//slower
  if(n%2==0)return true;
  else return false;
}

bool CheckEvenOdd1(int n){//faster
   return (n&1)==0;
}

int main(){
  int a;
  cout<<"enter the number"<<endl;
  cin>>a;
   if(CheckEvenOdd(a))
   cout<<"even"<<endl;
  else
  cout<<"Odd"<<endl;
  (CheckEvenOdd1(a)) ? cout<<"even hai bhai" :cout<<"odd hai bhai";

  return 0;
}