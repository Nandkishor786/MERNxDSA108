#include<bits/stdc++.h>
using namespace std;
 
//using primefactorizations methods
int countDivisors(int n){
  
if(n <= 0) return 0;

  int total =1;
  //handle even factors
  int count =0;

  while(n%2==0){
    count++;
    n /=2;
  }
  total *=(count+1);
  //handle odd factors
  for(int i=3;i*i<=n;i+=2){
    count =0;
    while(n%i==0){
      count++;
      n /=i;
    }
    total *=(count+1);
   }

   if(n>2){
    total *=2;
   }

   return total;

  }

int main(){

  int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Number of Divisors: "<<countDivisors(n)<<endl;

 

  return 0;
}