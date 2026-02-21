#include<iostream>
using namespace std;

bool isPalindNum(int n){
   
  if(n < 0) return false;

  int rev =0,rem;
   int original =n;

   while(n){
     rem =n%10;
     rev =rev*10+rem;
     n /=10;
   }

   return rev==original;
}

int main(){
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;

  if(isPalindNum(n))
    cout<<"Palindrome";
  else cout<<"not Palindrome";


  return 0;
}