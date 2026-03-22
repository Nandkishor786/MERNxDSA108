
#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
     
  int l=0;
  int r=s.length()-1;
  int maxdepth =0;
  int curr =0;   
  for(char c:s){
    if(c=='('){
      curr++;
      maxdepth =max(maxdepth,curr);
    }
    else if(c==')'){
      curr--;
    }
  }
  return maxdepth;
}
int main(){
   string s;
   cout<<"enter the strings ";
   getline(cin,s);
   
   cout<<"maxdepth : "<<maxDepth(s);

  
  return 0;
}