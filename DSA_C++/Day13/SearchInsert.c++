#include<bits/stdc++.h>
using namespace std;

 int searchInsert(vector<int>& nums, int target) {//o(n)
      int count=0;
      for(int num:nums){
        if(num<target){
          count++;
        }
      }  
      return count;
 }
  int SearchInsert(vector<int>& nums, int target){
    //o(logn)
    int left =0;
    int right =nums.size()-1;
    while(left<=right){
      int mid =left +(right-left)/2;
      if(nums[mid]==target)
      {
        return mid;
      }
  else if (target>nums[mid])
   {    
        left =mid+1;
    }
    else{
      right =mid-1;
    }
  }
   return left;
 }
  
int main(){
  int n;
  cout<<"enter the size of array  ";
  cin>>n;
  vector<int>v(n);
  cout<<"enter the array elements "<<endl;
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }
  int val ;
  cout<<"enter the value  "<<endl;
  cin>>val;
  cout<<" index is "<<searchInsert(v,val)<<endl;
  cout<<" index is "<<SearchInsert(v,val);

  return 0;
}