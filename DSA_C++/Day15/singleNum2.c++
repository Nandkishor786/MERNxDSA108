#include<bits/stdc++.h>
using namespace std;

//using map
    int singleNumber(vector<int>& nums) {
      unordered_map<int,int>map;
      for(int num:nums){
        map[num]++;
      }
      for(auto it:map){
        if(it.second==1){
          return it.first;
        }
      }
      return -1;
    }
  
  
int main(){
  int n;
  cout<<"enter the size of array  ";
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the array elements "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
cout<<"single number is "<<singleNumber(arr);

   return 0;
}