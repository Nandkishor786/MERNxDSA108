#include<bits/stdc++.h>
using namespace std;

//brute force -o(n2)
// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  
//     unordered_map<int,bool>map;
//     vector<int>result;
//     int m =nums1.size();
//     int n =nums2.size();
//     for(int i=0;i<m;i++){
//        if(map.find(nums1[i])!=map.end()){
//         continue;
//        }
//         for(int j=0;j<n;j++){
//          if(nums1[i]==nums2[j]){
//           result.push_back(nums1[i]);
//           map[nums1[i]]=true;
//           break;
//          }
//         }
//     }
// return result;
//     }
//brute force -o(n)
// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//   unordered_set<int>set1(nums1.begin(),nums1.end());
//   unordered_set<int>set2(nums2.begin(),nums2.end());
//     vector<int>result;
//     int m =nums1.size();
//     int n =nums2.size();
//   for(int num:set1){
//     if(set2.count(num)){
//         result.push_back(num);
//        }
//     }
// return result;
//     }
//optimised-o(nlogn)-two pointer
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  // unordered_set<int>result;
     vector<int>result;
     int m =nums1.size(); 
    int n =nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int i=0,j=0;
    while(i<m && j<n){
      if(nums1[i]<nums2[j]){
        i++;
      }
      else if(nums1[i]>nums2[j]){
        j++;
      }
      else{
        // result.insert(nums1[i]);
        if(result.empty()|| result.back()!=nums1[i]){
          result.push_back(nums1[i]);    
        }
        i++;
        j++;
      
      }
    }
return vector<int>(result.begin(),result.end());
    }
//optimised-o(nlogn)
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  unordered_set<int>result;
      int m =nums1.size();
    int n =nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int i=0,j=0;
    while(i<m && j<n){
      if(nums1[i]<nums2[j]){
        i++;
      }
      else if(nums1[i]>nums2[j]){
        j++;
      }
      else{
        result.insert(nums1[i]);
        i++;
        j++;
      
      }
    }
return vector<int>(result.begin(),result.end());
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
vector<int>result = intersection(arr,v);
cout<<"result number is "<<endl;
for(int num:result){
  cout<<num<<" ";
}

   return 0;
}