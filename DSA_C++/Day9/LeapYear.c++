#include <bits/stdc++.h>
using namespace std;
bool isLeapYear(int n){
return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
}
int main(){
  int a;
  cout<<"enter the year"<<endl;
  cin>>a;
   if(isLeapYear(a))
   cout<<"Leap year"<<endl;
  else
  cout<<"not Leap year"<<endl;
  return 0;
}