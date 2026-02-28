#include<bits/stdc++.h>
using namespace std;

//using sorting method
bool CheckTargetSum(vector<int>&nums ,int target){
  sort(nums.begin(),nums.end());
  int left =0;
  int right = nums.size()-1;
  int sum =0;
  while(left<right){
   sum =nums[left]+nums[right];
   if(sum==target)return true;
   else if(sum>target){
    right--;
  }else{
    left++;
  }
  }
  return false;
}

//using hashing
bool checkTargetSum(vector<int>&nums ,int target){
   unordered_set<int>s;
   for(int num:nums){
    int complement = target-num;
    if(s.count(complement)){
      return true;
    }
    s.insert(num);
   }
   return false;
}

int main(){
int n;
 cout<<"enter the array size  ";
 cin>>n;
 vector<int>v(n);
 cout<<"enter the array elements  ";
 for(int i=0;i<n;i++){
  cin>>v[i];
 }
 int target;
 cout<<"enter the target sum  ";
 cin>>target;

if(CheckTargetSum(v,target))
   cout<<"Using Sorting: Yes found"<<endl;
else
   cout<<"Using Sorting: Not found"<<endl;

if(checkTargetSum(v,target))
   cout<<"Using Hashing: Yes found"<<endl;
else
   cout<<"Using Hashing: Not found"<<endl;
  return 0;
}