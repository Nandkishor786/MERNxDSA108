#include<iostream>
using namespace std;

//Brute Force
int factorial(int n)
{  int fact =1;
  for(int i=1;i<=n;i++){
      fact *=i;
  }
  return fact;
}
//recursion
int factorial(int n)
{
  if(n==0 || n==1) return 1;
  else return n* factorial(n-1);
}

int main(){

   int n;
   cout<<"Enter the Number"<<endl;
   cin>>n;

   int result =factorial(n);

   cout<<"Factorial of Number "<<result;

  return 0;

}