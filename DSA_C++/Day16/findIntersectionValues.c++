#include<bits/stdc++.h>
using namespace std;

// //brute force t=o(n^2),s=o(1)
//      vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
//      int ans1 =0,ans2=0;
//      int n = nums1.size();
//     int m = nums2.size();
//      for(int i=0;i<nums1.size();i++){
//         for(int j=0;j<nums2.size();j++){
//           if(nums1[i]==nums2[j]){
//             ans1++;
//             break;
//            }
//         }
//      }
//       for(int i=0;i<nums2.size();i++){
//         for(int j=0;j<nums1.size();j++){
//           if(nums2[i]==nums1[j]){
//             ans2++;
//             break;
//            }
//         }
//      }
//      return {ans1,ans2};
//     }
//optimised -set
  vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int>s1(nums1.begin(),nums1.end());
      unordered_set<int>s2(nums2.begin(),nums2.end());
      int ans1=0,ans2=0;
      for(int num:nums1){
        if(s2.count(num))ans1++;
      }
     for(int num:nums2){
        if(s1.count(num))ans2++;
      }

  return {ans1,ans2};
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
vector<int>result = findIntersectionValues(arr,v);
cout<<"result number is "<<endl;
for(int num:result){
  cout<<num<<" ";
}

   return 0;
}