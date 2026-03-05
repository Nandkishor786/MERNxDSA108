#include<bits/stdc++.h>
using namespace std;

//bruteforce-O(n*m)
// vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
// if(nums1.size()>nums2.size()){
//   swap(nums1,nums2);
// }
// int n=nums1.size();
// int m=nums2.size();
//  int i=0,j=0;
//  vector<int>result;
//  for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//        if(nums1[i]==nums2[j]){
//           result.push_back(nums1[i]);
//           nums2[j]=INT_MIN;
//           break;
//          }
//       }
//  }
 
// return result;
// }
// optiised//two pointer-O(n log n)
// vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//   sort(nums1.begin(),nums1.end());
//   sort(nums2.begin(),nums2.end());
//  int i=0,j=0;
//  int n=nums1.size();
//  int m=nums2.size();
//  vector<int>result;
//  while(i<n && j<m){
//   if(nums1[i]<nums2[j]){
//     i++;
//   }else if(nums1[i]>nums2[j]){
//     j++;
//   }else{
//     result.push_back(nums1[i]);
//     i++;
//     j++;
//   }
//  }
// return result;
// }

//hashmap-o(n)
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

    if(nums1.size() > nums2.size()){
        swap(nums1, nums2);
    }

    unordered_map<int,int> freq;

    for(int num : nums1){
        freq[num]++;
    }

    vector<int> result;

    for(int num : nums2){
        if(freq[num] > 0){
            result.push_back(num);
            freq[num]--;
        }
    }

    return result;
}

int main(){
  int m;
  cout<<"enter the size of array1  ";
  cin>>m;
  vector<int>arr(m);
  cout<<"enter the array elements "<<endl;
  for(int i=0;i<m;i++){
    cin>>arr[i];
  }
   int n;
  cout<<"enter the size of array2  ";
  cin>>n;
  vector<int>v(n);
  cout<<"enter the array elements "<<endl;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
vector<int>result = intersect(arr,v);
cout<<"result number is "<<endl;
for(int num:result){
  cout<<num<<" ";
}
   return 0;
}