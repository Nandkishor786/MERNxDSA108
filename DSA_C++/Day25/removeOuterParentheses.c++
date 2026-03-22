
#include<bits/stdc++.h>
using namespace std;

  string removeOuterParentheses(string s) {
      int count =0;
       string result="";
      for(char c:s){
          if(c=='(') {
            if(count>0)
            result +=c;
          count++;
         }
          else {
            count--;
           if(count>0)result +=c;
          }
     }  
  return result;
  }
int main(){
   string s;
   cout<<"enter the strings ";
   getline(cin,s);
   
  cout<<"valid str is "<<removeOuterParentheses(s);
  
  return 0;
}