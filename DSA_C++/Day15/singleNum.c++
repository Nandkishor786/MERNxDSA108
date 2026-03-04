#include<bits/stdc++.h>
using namespace std;

// using xor
 int singleNumber(vector<int>& nums) {
    int n=nums.size();
    int num=0;
    for(int i=0;i<n;i++){
         num ^=nums[i];
    }
    return num;
  }
//using sorting
   int singleNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-1;i +=2){
        if(nums[i]!=nums[i+1])
        return nums[i];
     }
    return nums[nums.size()-1];
  }

  //using hashing
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