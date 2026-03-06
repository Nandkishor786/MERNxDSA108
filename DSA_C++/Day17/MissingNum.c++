#include<bits/stdc++.h>
using namespace std;


//optimised Sum Formula-o(n)-
  // int missingNumber(vector<int>& nums) {
  //     int n =nums.size();
  //     int expectedSum =(n*(n+1))/2;
  //     int actualSum=0;
  //     for(int num:nums){
  //       actualSum +=num;
  //     }
  //     int missingnum =expectedSum-actualSum;
  //     return missingnum;
  //   }
  //Sorting
  // int missingNumber(vector<int>& nums) {
  //     int n =nums.size();
  //      sort(nums.begin(),nums.end());
  //     for(int i=0;i<=n;i++){
  //        if(nums[i]!=i)
  //        return i;
  //     }
  //      return n;
  //   }

  //using XOR
    // int missingNumber(vector<int>& nums) {
    //   int n =nums.size();
    //   int xor1=0;
    //   int xor2 =0;
    //    for(int i=0;i<=n;i++){
    //      xor1 ^=i;
    //    }
    //    for(int num:nums){
    //     xor2 ^=num;
    //    }
    //    return xor1^xor2;
    // }
    //  //using XOR-shrter version
   int missingNumber(vector<int>& nums) {
      int ans =nums.size();
       for(int i=0;i<nums.size();i++){
         ans ^=i^nums[i];
       }
       
       return ans;
    }

int main(){   
   
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  vector<int>v(n);
  cout<<"enter the array elements "<<endl;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
 cout<<"missing elemnent is  "<<missingNumber(v)<<endl;
 
   return 0;
}