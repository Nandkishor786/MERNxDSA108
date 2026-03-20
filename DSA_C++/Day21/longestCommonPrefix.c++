#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
      sort(strs.begin(),strs.end());  
      string first =strs[0];
      string last =strs[strs.size()-1];
      string ans="";
      for(int i=0;i<first.length();i++){
        if(first[i]==last[i])
            ans +=first[i];
        else 
          break;
      }

      return ans;
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