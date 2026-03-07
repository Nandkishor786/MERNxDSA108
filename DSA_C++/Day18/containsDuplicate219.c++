#include<bits/stdc++.h>
using namespace std;

   bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
  unordered_set<int>window;
  for(int i=0;i<nums.size();i++){
      if(window.count(nums[i]))
      return true;

      window.insert(nums[i]);
      if(window.size()>k){
        window.erase(nums[i-k]);
      }
  }
  return false;
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
   if(containsNearbyDuplicate(v,k)){
    cout<<"yes ";
   }
   else{
    cout<<" Not"<<endl;
   }

}