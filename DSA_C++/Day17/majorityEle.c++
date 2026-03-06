#include<bits/stdc++.h>
using namespace std;

// using map-o(n),o(n)-space
  int majorityElement(vector<int>& nums) {
     unordered_map<int, int>freq;
     int n =nums.size();
      for(int num:nums){
        freq[num]++;
        if(freq[num]>n/2)
        return num;
      }
      return -1;
   }
   
  //Moore’s Voting Algorithm,o(n),s(1)
    int majorityElement(vector<int>& nums) {
      int condidate =-1;
      int count =0;
      int n =nums.size();
      for(int num:nums){
        //select condidate
        if(count==0){
          condidate =num;
        }
        if(num==condidate){
            count++;
        }
        else{
          count--;
        }
       }
      return condidate;
   }
int main(){   
   
  int n;
  cout<<"enter the size of array1  ";
  cin>>n;
  vector<int>v(n);
  cout<<"enter the array elements "<<endl;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
 cout<<"majority elemnent is  "<<majorityElement(v)<<endl;
 
   return 0;
}