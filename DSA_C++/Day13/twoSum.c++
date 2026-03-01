#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int,int>m;
  for(int i=0;i<nums.size();i++){
    int complement =target-nums[i];
    if(m.find(complement)!=m.end()){
     return{m[complement],i};
    }
    m[nums[i]] =i;
  }
  return {};
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
cout<<endl;
int target;
cout<<"enter the target sum  ";
cin>>target;
vector<int>result =twoSum(v,target);
cout<<"result is  :"<<endl;
cout<<"[ ";
for(int num:result){
  cout<<num<<" , ";
}
cout<<"]";

  return 0;
}