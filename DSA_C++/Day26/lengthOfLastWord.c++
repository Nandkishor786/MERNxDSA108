
#include<bits/stdc++.h>
using namespace std;

  int lengthOfLastWord(string s) {
        
     int lengWord =0;
     for(int i=s.length()-1;i>=0;i--){
      if(s[i]==' ' && lengWord==0)continue;
      else if(s[i]==' ' && lengWord>0)
      return lengWord;
      else 
       lengWord++;
     }
     return lengWord;
    }

int main(){
   string s;
   cout<<"enter the romans ";
   getline(cin,s);
   
   cout<<"lengthOfLastWord : "<<lengthOfLastWord(s);

  return 0;
}