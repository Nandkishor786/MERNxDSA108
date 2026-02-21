#include <bits/stdc++.h>
using namespace std;

//Swapping..........
// Call by Value
// A copy of the variable is passed.
// Changes inside function do NOT affect original variable.
void callByValue (int a,int b){
    int temp = a;
    a= b;
     b=temp;
 }
//   Call by Reference (Pointer)
void CallByRefence(int *a,int *b){
    int temp = *a;
    *a= *b;
    *b=temp;
 }
 //Call by Reference (Reference variable &)
 void CallByRefence1(int &a,int &b){
    int temp = a;
    a= b;
    b=temp;
 }
 //swapping without temp(risky)
  void withoutTemp(int &a,int &b){
     a= a+b;//Addition-Subtraction method has risk
     b= a-b;//a = a + b → overflow 
     a= a-b;//It can cause integer overflow.
 }
  //swapping without temp(safe)
  void withoutTemp1(int &a,int &b){
     a= a^b; 
     b= a^b; 
     a= a^b; 
 }

int main(){
  int a,b;
  cout<<"enter the numbers"<<endl;
  cin>>a>>b;
  cout<<"before swaping "<<a<<" "<<b<<endl;
    cout<<"call by value"<<endl;
  callByValue(a,b);
  cout<<"after swapping "<<a<<" "<<b<<endl;
  cout<<"call by reference"<<endl;
  CallByRefence(&a,&b);
  cout<<"after swapping "<<a<<" "<<b<<endl;
  CallByRefence1(a,b);
 cout<<"after swapping "<<a<<" "<<b<<endl;
 withoutTemp(a,b);
  cout<<"after swapping without temp(risky) "<<a<<" "<<b<<endl;
   withoutTemp1(a,b);
  cout<<"after swapping without temp(safe) "<<a<<" "<<b;
  return 0;
}