#include<bits/stdc++.h>
using namespace std;
 

string reverseStr(string s, int k) {
        
     for(int i=0;i<s.length();i +=2*k){
      int l =i;
      int r = min(i+k-1, (int)s.length()-1);
      while(l<r){
        swap(s[l],s[r]);
          l++;
      r--;
      }
     }
     return s;
    }
int main(){
 string s;
  cout<<"enter the string" ;
  cin>>s;
  int k;
  cout<<"enter the integer k value ";
  cin>>k;
 string result  =reverseStr(s,k);
 cout<<"reverse string is : "<<result<<endl;
 
  return 0;
}