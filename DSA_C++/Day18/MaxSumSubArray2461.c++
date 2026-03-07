#include<bits/stdc++.h>
using namespace std;

//in subarray with distinct elements-o(n),s(n)
 long long maximumSubarraySum(vector<int>& nums, int k) {
  long long windowSum =0;
  long long maxSum =0;
  unordered_map<int,int>map;
  int left =0;
  for(int right=0;right<nums.size();right++){
    windowSum +=nums[right];
    map[nums[right]]++;
    if(right-left+1>k){
      windowSum -=nums[left];
      map[nums[left]]--;
      if(map[nums[left]]==0){
        map.erase(nums[left]);
      }
      left++;
    }
    if(right-left+1==k && map.size()==k){
      maxSum =max(maxSum,windowSum);
    }
  }
    return maxSum;
    }
int main(){
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  vector<int>v(n);
  cout<<"enter the array elements ";
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
   int k;
   cout<<"enter the size of subarray ";
   cin>>k;
   cout<<"maximum Sum array "<<maximumSubarraySum(v,k);

}