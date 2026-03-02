#include<bits/stdc++.h>
using namespace std;
//using sorting 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)  {   
      for(int i=0;i<n;i++){
        nums1.push_back(nums2[i]);
     }
    sort(nums1.begin(),nums1.end());

   for(int num:nums1){
    cout<<num<<" ";
  }
    }

  //using backword mergesort two pointer
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)  {   
      int i=m-1;
      int j=n-1;
      int k=m+n-1;
      while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
          nums1[k]=nums1[i];
          i--;
        }
        else{
          nums1[k]=nums2[j];
          j--;
        }
        k--;
      }
      while(j>=0){
        nums1[k]=nums2[j];
        j--;
        k--;
      }
  }
    }
int main(){
  int m;
  cout<<"enter the size of array  ";
  cin>>m;
  vector<int>v(m);
  cout<<"enter the array elements "<<endl;
  for(int i=0;i<m;i++){
    cin>>v[i];
  }
  int n;
  cout<<"enter the size of array  ";
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the array elements "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  merge(v,m,arr,n);
  return 0;
}