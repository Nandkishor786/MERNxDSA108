#include<bits/stdc++.h>
// #include<regex>
using namespace std;

// bool isPalindrome(string s){
//   s =regex_replace(s,regex("[^a-zA-Z0-9]"),"");
//   for(char &c:s){
//     c=tolower(c);
//   }
//   int l =0;
//   int r =s.length()-1;
//   while(l<r){
//     if(s[l]!=s[r])return false;
//     l++;
//     r--;
//   }
//   return true;
// }
bool isPalindrome(string s){
  int l =0;
  int r =s.length()-1;
  while(l<r){
    if(!isalnum(s[l]))l++;
    else if(!isalnum(s[r]))r--;
    else{
      if(tolower(s[l])!=tolower(s[r]))return false;
      l++;
    r--;
    }
    
  }
  return true;
}
int main(){
   string s;
   cout<<"enter the string "<<endl;
   getline(cin ,s);
  //  cout<<s;
   if(checkPalindrom(s)){
    cout<<"yes"<<endl;
   }else{
    cout<<"No"<<endl;
   }
  return 0;
}
