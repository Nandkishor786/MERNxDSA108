#include<bits/stdc++.h>
using namespace std;

  // bool isAnagram(string s, string t) {
  //   string a=s;
  //   string b=t;
  // sort(a.begin(),a.end());
  //    sort(b.begin(),b.end());
  //    if(a==b)
  //    return true;
  //   else
  //   return false;
  //   }

     bool isAnagram(string s, string t) {
       
      if(s.length()!=t.length())
      return false;
      
      unordered_map<char ,int>freq;

      for(char c:s){
        freq[c]++;
      }
      for(char c:t){
        freq[c]--;
      }
      for(auto it:freq){
        if(it.second!=0)return false;
      }
      return true;
    }

int main(){
  string s;
  string t;
  cout<<"enter the strings ..."<<endl;
  cin>>s;
  cin>>t;

  if(isAnagram(s,t)){
    cout<<"anagram"<<endl;
  }else{
    cout<<"not anagram"<<endl;
  }
  return 0;
}