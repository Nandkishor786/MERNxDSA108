#include<bits/stdc++.h>
using namespace std;

void countFactors(int n){
  int totalFactors =0;
  int oddFactors =0;
  int evenFactors =0;
  
  //even factors -all 2
  while(n%2==0){
    cout<<2<<" ";
     totalFactors++;
     evenFactors++;
     n /=2;
  }
 //all odd factors
 for (int i=3;i*i<n;i+=2){
      while(n%i==0){
        cout<<i<<" ";
        totalFactors++;
        oddFactors++;
        n /=i;
      }
 }
 if(n>2){
  cout<<n;
  totalFactors++;
  oddFactors++;
 }

 cout<<endl;
 cout<<"totalFactors : "<<totalFactors<<endl;
 cout<<"oddFactors : "<<oddFactors<<endl;
 cout<<"evenFactors : "<<evenFactors<<endl;
}

int main(){

 int n;
 cout<<"enter the number "<<endl;
 cin>>n;
 countFactors(n);

  return 0;
}