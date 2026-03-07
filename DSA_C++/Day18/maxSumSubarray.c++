#include<bits/stdc++.h>
using namespace std;

//in subarray with duplicates-o(n^2)-brute force
 long long maximumSubarraySum(vector<int>& nums, int k) {
  long long maxSum =0;
  for(int i=0;i<=nums.size()-k;i++){
   long long currSum =0;
   for(int j=i;j<k+i;j++){
      currSum +=nums[j];
   }
   maxSum  =max(maxSum,currSum);
  }
return maxSum;
    }

// in subarray with duplicates-O(N)-sliding window
 long long maximumSubarraySum(vector<int>& nums, int k) {
  long long windowSum =0;
  long long maxSum =0;
  //first window 
     for(int i=0;i<k;i++){
      windowSum +=nums[i];     }
   maxSum = windowSum;
  //slide window
  for(int i=k;i<nums.size();i++){
     windowSum +=nums[i];//next ele
     windowSum -=nums[i-k];//first ele
     maxSum = max(maxSum,windowSum);
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