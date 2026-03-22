
#include<bits/stdc++.h>
using namespace std;

 int strStr(string haystack, string needle) {
  int idx =haystack.find(needle);
  return idx;
 }

int main(){
   string s,str;
   cout<<"enter the strings ";
   getline(cin,s);
   getline(cin,str);
  
   cout<<"index is "<<strStr(s,str);
  
  return 0;
}