#include<bits/stdc++.h>
using namespace std;

//o(n^2)
// string finalString(string s) {
//     string result ="";
//     for(int i=0;i<s.length();i++){
//       if(s[i]=='i'){
//         reverse(result.begin(),result.end());
//       }else{
//         result  +=s[i];}
//     }
//     return result;
//     }
//optimised-o(n)
//dequeu
string finalString(string s) {
    deque<char>dq;
    bool rev =false;
     for(char c:s){
      if(c=='i'){
        rev =!rev;
      }
      else{
        if(!rev){
          dq.push_back(c);
        }else{
          dq.push_front(c);
        }
      }
     }
   string result(dq.begin(),dq.end());
   if(rev){
    reverse(result.begin(),result.end());
   }

    return result;
    }

int main(){
   
  string s;
  cout<<"enter the string  ";
  cin>>s;
  cout<<"reverse is  :"<<finalString(s)<<endl;
    return 0;
}