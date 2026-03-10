#include<bits/stdc++.h>
using namespace std;

//two pointer
// void reverseString(vector<char>& s) {
//   int left =0;
//   int right = s.size()-1;   
//   while(left<right){
//     swap(s[left],s[right]);
//     left++;
//     right--;
//   }
// }
//XOR-swap
// void reverseString(vector<char>& s) {
//   int left=0;
//   int right =s.size()-1;
//   while(left<right){
//     s[left] ^=s[right];
//     s[right] ^=s[left];
//     s[left] ^=s[right];
//     left++;
//     right--;
//   }
//  }
//using temp var
 void reverseString(vector<char>& s) {
  int left=0;
  int right =s.size()-1;
  while(left<right){
      char temp =s[left];
      s[left] =s[right];
      s[right] =temp;
    left++;
    right--;
  }
 }
//STL
// void reverseString(vector<char>& s) {
//   reverse(s.begin(),s.end());
// }
int main(){
   
 int n;
 cout<<"enter the size of char array ";
 cin>>n;
  vector<char>s(n);
  cout<<"enter the character of string "<<endl;
  for(int i=0;i<n;i++){
    cin>>s[i];
  }

  reverseString(s);
  cout<<"reverse is  :"<<endl;
  for(char c:s){
    cout<<c<<" ";
  }
 
    return 0;
}