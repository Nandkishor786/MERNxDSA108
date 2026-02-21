#include<bits/stdc++.h>
using namespace std;

int fact(int n){
  if(n==0 || n==1)return 1;
  else 
  return n*fact(n-1);
}
bool isStrongNumber(int n){
 int rem=0,sum=0;
 int original =n;
 while(n>0){
  rem = n%10;
 sum +=fact(rem);
 n /=10;
 }
return sum==original;
}

int main() {
   int n;
   cout<<"enter the number"<<endl;
   cin>>n;
   
   if(isStrongNumber(n))
   cout<<"Strong Number"<<endl;
  else
  cout<<"Not Strong Number"<<endl;

  return 0;
}