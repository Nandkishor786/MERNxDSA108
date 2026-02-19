#include <bits/stdc++.h>
using namespace std;

 void PrimeFactorization(int n){//O(√n)
      cout<<"Prime Factors: ";
      // 2 is even prime
     while(n%2==0){  //handle 2 saparately
      cout<<2<<" ";
      n /=2;
     }
    //avoid unneccessary even
    // Handle odd primes

    for(int i=3;i*i<=n;i+=2){
      while(n%i==0){
        cout<<i<<" ";
        n /=i;
      }
    }
    if(n>2)
    cout<<n<<" ";
   cout<<endl;
 }
 bool isPrime(int n){
   if(n<=1)return false;
    for(int i=2;i<n;i++){
      if(n%i==0)
      return false;
    }
    return true;
 }
  void PrimeFactorization1(int n){ //o(n)
   cout<<"Prime Factors: ";
    for(int i=2;i<=n;i++){
      if(isPrime(i)){
        while(n%i==0){
          cout<<i<<" ";
          n /=i;
      }
      } 
    }
    cout<<endl;
 }
int main(){
  int n;
  cout<<"enter the number  "<<endl;
  cin>>n;
  PrimeFactorization(n);
  PrimeFactorization1(n);
  return 0;
}
