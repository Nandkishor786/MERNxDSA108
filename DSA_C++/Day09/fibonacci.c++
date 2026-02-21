#include<iostream>
using namespace std;
 
//Brute force
 void fibonacci(int n){
  int a=0,b=1;
  int c;
  for(int i=1;i<=n;i++){
    cout<<a<<" ";
    c =a+b;
    a=b;
    b=c;
  }
 }

//recursuion -bad
 void fibonacci(int n){
   if(n<=1)return n; 
  else return fibonacci(n-1)+fibonacci(n-2);
 }

int main(){
 int n;
 cout<<"Enter the Number"<<endl;
 cin>>n;
  for (int i=0;i<n;i++){
     cout<<fibonacci(i)<<" ";
  }
  return 0;
}

// Interview Important Point
// If interviewer asks:
// “Why recursive Fibonacci is bad?”
// Answer:
// Because it recalculates same subproblems multiple times, leading to exponential time complexity.