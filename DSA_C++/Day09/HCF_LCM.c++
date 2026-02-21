#include <bits/stdc++.h>
using namespace std;

int HCF(int a,int b){
  int rem =0;
    while(b!=0){
      rem = a%b;
      a=b;
      b=rem;
    }
  return a;
}
int LCM(int a,int b){
  int hcf =HCF(a,b);
  // return (a*b)/hcf;//a*b may cause integer overflow if numbers are large.
  return (a/hcf)*b;//safer version
}
int main(){
  int a,b;
  cout<<"enter the numbers"<<endl;
  cin>>a>>b;
  cout<<"HCf of "<<a<<" and "<<b <<" is : "<<HCF(a,b)<<endl;
   cout<<"LCM of "<<a<<" and "<<b <<" is : "<<LCM(a,b)<<endl;
  return 0;
}