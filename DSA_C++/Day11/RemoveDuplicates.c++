#include<bits/stdc++.h>
using namespace std;

//from unsorted array =o(n),space-o(n)
vector<int> RemoveDuplicates(vector<int>&nums){
  unordered_set<int>s;
  vector<int>v;
  for(int num:nums){
     if(!s.count(num)){
       s.insert(num);
       v.push_back(num);
     }
  }
  return v;
}
//sorted array-two pointer-o(n),s=o(1)
int Removeduplicates(vector<int>&nums){     
  int i=0;
  for(int j=1;j<nums.size();j++){
      if(nums[j]!=nums[i]){
        i++;
        nums[i]=nums[j];
      } 
    }
     return i+1;
}
int main(){
  int n;
  cout<<"enter the size of array  ";
  cin>>n;
  vector<int>v(n);
  cout<<"enter the elements  ";
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }
  cout<<"after removing elements using hashing "<<endl;
  vector<int> ans = RemoveDuplicates(v);
  for(int num:ans){
    cout<<num<<" ";
  }
  sort(v.begin(), v.end());
  cout<<endl;
  cout<<"after removing elements from sorted using two pointer "<<endl;

  int newlength = Removeduplicates(v);
  for(int i=0;i<newlength;i++){
    cout<<v[i]<<" ";
  }
  return 0;

}