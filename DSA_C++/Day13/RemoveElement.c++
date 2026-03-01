#include<bits/stdc++.h>
using namespace std;

 // ✔ Time Complexity: O(n)
// ✔ Space Complexity: O(n)
  int removeElement(vector<int>& nums, int val) {
    vector<int>result;
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==val){
          nums[i]=0;
          count++;
        }
     }
    sort(nums.begin(),nums.end(),greater<int>());
    return nums.size()-count;
     }

  int RemoveElement(vector<int>& nums, int val) {//O(N)
     int k=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
          nums[k]=nums[i];
          k++;
       }
     }
     return k;
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
  cout<<"using count methods  "<<removeElement(v,val)<<endl;
  cout<<"using two pointer methods  "<<RemoveElement(v,val);
  return 0;
}