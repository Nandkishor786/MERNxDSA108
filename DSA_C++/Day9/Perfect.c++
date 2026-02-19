#include <bits/stdc++.h>
using namespace std;
 
 bool isPerfect(int n){  //o(n)
  int sum=0;
  int original=n;
  for (int i=1;i<n;i++){
    if(n%i==0)
    sum +=i;
  }
  return original==sum;

 }

bool isPerfect1(int n){//O(√n)
  int sum=1;//one is always divides any number
  int original=n;
  for (int i=2;i*i<n;i++){
    if(n%i==0){
          sum +=i;
        if(i!=n/i)
        sum +=n/i;
    }
  }
  return original==sum;

 }

int main(){
  int a;
  cout<<"enter the number"<<endl;
  cin>>a;
   if(isPerfect(a))
   cout<<"perfect"<<endl;
  else
  cout<<"not perfect"<<endl;
 
  (isPerfect1(a)) ? cout<<"perfect hai"<<endl :  cout<<"not perfect hai"<<endl;
 
  return 0;
}