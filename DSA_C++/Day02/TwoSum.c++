#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// vector<int> twoSum(vector<int>& nums, int target) {
        
//           vector<int>v;
//           for(int i=0;i<nums.size();i++){
//                for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                   v.push_back(i);
//                   v.push_back(j);
//                   return v;
//                 }
//                }
//           }
//           return {};
//     }


  //optimised
vector<int> twoSum(vector<int>& nums, int target) {
        
                unordered_map<int,int>m;
                for(int i=0;i<nums.size();i++){
                  int num = nums[i];
                   if(m.find(target-num)!=m.end()){
                      return {m[target-num],i};
                   }
                     m[num] =i;
                }     
                return {};
    }

    int main(){
            vector<int> nums ={3,3};
            int target =6;
          
           vector<int>result  =twoSum(nums,target);
           for(auto num:result){
            cout<<num<<" ";
           }



        

      return 0;
    }