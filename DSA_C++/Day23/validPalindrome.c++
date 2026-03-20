#include<bits/stdc++.h>
// #include<regex>
using namespace std;

bool isPalindrome(string s, int l,int r){
  while(l<r){
       if(s[l]!=s[r])return false;
      l++;
      r--;
    }
  return true;
}
  bool validPalindrome(string s) {
      
    bool isdelete =false;
    int l =0;
    int r=s.length()-1;
    while(l<r){
      if(s[l]!=s[r]){
       return isPalindrome(s,l+1,r) ||isPalindrome(s,l,r-1);
    }
    l++;
    r--;

  }
    return true;
    }
int main(){
   string s;
   cout<<"enter the string "<<endl;
   getline(cin ,s);
  //  cout<<s;
   if(validPalindrome(s)){
    cout<<"yes"<<endl;
   }else{
    cout<<"No"<<endl;
   }
  return 0;
}
