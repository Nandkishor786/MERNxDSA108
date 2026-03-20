#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s){
 int l=0;
 int r =s.size()-1;
 while(l<r){
   swap(s[l],s[r]);
   l++;
   r--;
 }
}

string reverseStr(string s, int k) {
        
    }
int main(){
  int n;
  cout<<"enter the size of char array " ;
  cin>>n;
  vector<char>s(n);
  cout<<"enter the string"<<endl;
  for(int i=0;i<n;i++){
    cin>>s[i];
  }

 reverseString(s);
 cout<<"reverse string is : ";
 for(char c:s){
  cout<<c<<" ";
 }
  return 0;
}