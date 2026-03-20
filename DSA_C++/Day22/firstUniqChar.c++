#include<bits/stdc++.h>
using namespace std;

     int firstUniqChar(string s) {
          
      for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
          if(s[i]!=s[j])continue;
          else break;
        }
       }

     }

int main(){
   
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  vector<string>strs(n);
  cout<<"enter the string for array ";

   for(int i=0;i<n;i++){
     cin>>strs[i];
   }
   cout<<"longestcommonprefix is   :"<<longestCommonPrefix(strs)<<endl;
    return 0;
}