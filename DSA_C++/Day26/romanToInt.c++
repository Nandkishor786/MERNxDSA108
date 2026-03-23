
#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
  unordered_map<char,int>check ={
    {'I',1},
    {'V',5},
    {'X',10},
    {'L',50},
    {'C',100},
    {'D',500},
    {'M',1000}, 
   };
  int intNum =0;
  for(int i=0;i<s.length();i++){
       
        if(i+1<s.length()&& check[s[i]]<check[s[i+1]]){
          intNum -=check[s[i]];
        }
        else{
         intNum += check[s[i]];
        }
  }
  return intNum;
}

int main(){
   string s;
   cout<<"enter the romans ";
   getline(cin,s);
   
   cout<<"interger : "<<romanToInt(s);

  return 0;
}