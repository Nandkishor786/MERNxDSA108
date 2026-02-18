#include<iostream>
using namespace std;
#include<vector>
#include <climits>   // for INT_MAX
#include<unordered_map>
#include <list>
#include <unordered_map>


  bool checksorted(vector<int>& nums){
  
      for(int i =0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]) return false;
      }
      
      return true;
  }

  int minimumPairRemoval(vector<int>& nums) {
          int opeartionCount =0;

      while(!checksorted(nums)){
          int misSum = INT_MAX;
        int minIdx =-1;

          for(int i=0;i<nums.size()-1;i++){
          int sum =nums[i]+nums[i+1];
            if(sum < misSum){
            misSum = sum;
            minIdx =i;
            } 
        }  
        

        nums[minIdx] =misSum;
        nums.erase(nums.begin()+minIdx+1);
        ++opeartionCount;
      
      }
        return opeartionCount;
      }


int main(){

      vector<int>v ={5,2,3,1};
      int opeartionCount =minimumPairRemoval(v);
      cout<<" opeartion count is "<<opeartionCount<<endl;
      // cout<<" missum is "<<misSum<<endl;
      // if(checksorted(v)){
      //   cout<<"yes"<<endl;
      // }else{
      //   cout<<"no"<<endl;
      // }


  return 0;
}