#include <bits/stdc++.h>
using namespace std;
 int countDigits(int n){
  if (n==0)return 1;
  int count =0;
  n= abs(n);
   while(n>0){
     n /=10;
     count++;
   }
   return count;
 }
int main(){
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
   cout<<"counts of didgit of " <<n<<" is "<<countDigits(n)<<endl;

  return 0;
}