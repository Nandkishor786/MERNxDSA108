#include <bits/stdc++.h>
using namespace std;
bool isPowOfTwo(int n){ //o(n)
  if (n<=0)return false;
  while(n%2==0){
    n /=2;
  }
  return n==1;
}

bool isPowOfTwo1(int n){ //o(1)
   return (n>0 && ((n & (n-1))==0 ));
}
int main(){
  int a;
  cout<<"enter the Number"<<endl;
  cin>>a;
   if(isPowOfTwo(a))
   cout<<"PowOfTwo"<<endl;
  else
  cout<<"not PowOfTwo"<<endl;
 (isPowOfTwo1(a) ?  cout<<"PowOfTwo"<<endl : cout<<"not PowOfTwo"<<endl);

  return 0;
}