#include<bits/stdc++.h>
using namespace std;

//using set
  // bool containsDuplicate(vector<int>& nums) {
  //     unordered_set<int>s;
  //     for(int num:nums){
  //       if(s.count(num)){
  //         return true;
  //       }
  //       s.insert(num);
  //     }
  //     return false;
  //   }
  //using map
  //  bool containsDuplicate(vector<int>& nums) {
  //     unordered_map<int,int>map;
  //     for(int num:nums){
  //       if(map.find(num)!=map.end()){
  //         return true;
  //       }
  //       map[num]=true;
  //     }
  //     return false;
  //   }
 //using sorting
bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
          return true;
        }
       }
      return false;
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

  if(containsDuplicate(arr))cout<<"Yes ";
  else cout<<" Not ";


   return 0;
}