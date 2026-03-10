#include<bits/stdc++.h>
using namespace std;

  bool isVowel(char c){
     c =tolower(c);
  return c=='a' ||c=='e'||c=='i'||c=='o'||c=='u';
  }
  //two pointer
  // string reverseVowels(string s) {
  //     int left= 0;
  //     int right =s.length()-1;
  //     while(left<right){
  //       while(left<right && !isVowel(s[left])){
  //         left++;
  //       }
  //       while(left<right &&!isVowel(s[right])){
  //         right--;
  //       } 
  //     swap(s[left],s[right]);
  //         left++;
  //         right--;
        
  //     }
  //     return s;
  //    }
//Store reversed vowels method
// string reverseVowels(string s) {
//       string revVowel ="";
//       for(int i=s.length()-1;i>=0;i--){
//         if(isVowel(s[i])){
//         revVowel +=s[i];
//         }
//       }
//       int k=0;
//       cout<<revVowel<<endl;
//    for(int i=0;i<s.length();i++){
//      if(isVowel(s[i])){
//        s[i]=revVowel[k++];
//      }
//       }
//       return s;
//      }
string reverseVowels(string s) {
      int left=0;
      int right
      return s;
     }
int main(){
   
  string s;
  cout<<"enter the string "<<endl;
  cin>>s;
  cout<<s<<endl;
  cout<<"result is :"<<reverseVowels(s);
    // reverseVowels(s);

    return 0;
}