#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
  double maxWindow =0;
  double maxAvg =0;
  for(int i=0;i<k;i++){
     maxWindow +=nums[i];
  }
  maxAvg = maxWindow/k;
  for(int i=k;i<nums.size();i++){
    maxWindow +=nums[i];
    maxWindow  -=nums[i-k];
    double currAvg  =maxWindow/k;
    maxAvg = max(maxAvg,currAvg);
  }
  return maxAvg;
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
  
   cout<<"max avg is  "<<findMaxAverage(v,k);
  return 0;
}