#include<iostream>
using namespace std;
#include<string>



  //  bool doesAliceWin(string s) {
        
  //        int count =0;
  //       for(int i=0;i<s.size();i++){
  //        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i] =='u'){
  //         ++count;
  //       } 
  //     }
  //     if(count>0)return true;
  //     else return false;
  // }


  //optimised
  
   bool doesAliceWin(string s) {
        
       if(s.find_first_of("aeiou")!=string::npos)
       return true;
      else return false;
        
  }




int main(){
    
     string s ="leetcoder";
        if(doesAliceWin(s)){
          cout<<"Alice is win"<<endl;
        }else{
          cout<<"Bobs is wins"<<endl;
        }
  return 0;
}