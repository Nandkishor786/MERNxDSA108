#include<bits/stdc++.h>
using namespace std;

  string reverseOnlyLetters(string s) {
        
     int l=0;
     int r=s.length()-1;
     while(l<r){
      if(!isalpha(s[l])){
        l++;
      }
     else if(!isalpha(s[r])){
      r--;
     }
    else{
        swap(s[l],s[r]);\
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

 string result = reverseOnlyLetters(s);
 cout<<"reverse string is : ";
 cout<<result;
  return 0;
}