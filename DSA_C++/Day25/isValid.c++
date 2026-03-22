
#include<bits/stdc++.h>
using namespace std;

 bool isValid(string s) {
    stack<char>track;
    for(char c:s){
     if(c=='('||c=='{'||c=='[')
     track.push(c);
    else{
         if(track.empty())return false;
         int top =track.top();
        if((c==')' && top=='(') ||(c=='}' && top=='{') || (c==']' && top=='['))
         track.pop();
        else
        return false;
    }
    }
    return track.empty();
}
int main(){
   string s;
   cout<<"enter the strings ";
   getline(cin,s);
   
   if(isValid(s))
  cout<<"valid str "<<endl;
else 
  cout<<"invalid str "<<endl;

  
  return 0;
}