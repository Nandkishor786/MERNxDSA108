#include<bits/stdc++.h>
using namespace std;
int findDuplicateUsingSet(vector<int>&nums){//O(n)
unordered_set<int>s;
for (int num:nums){
if(s.count(num)) {
return num;
}
s.insert(num);
}
return -1;
}
int findDuplicateUsingUnorderedMap(vector<int>&nums){//O(n)
unordered_map<int,int>m;
for (int num:nums){
if(m.count(num)) {
return num;
}
m[num]++;
}
return -1;
}
int findDuplicateUsingMap(vector<int>&nums){//O(nlogn)
map<int ,int>m;
for (int num:nums){
if(m.count(num)) {
return num;
}
m[num]++;
}
return -1;
}
//Floyd’s Cycle
int FloydsCycle(vector<int>&nums){ //o(n)
if(nums.size()<2)return -1;
int slow =nums[0];
int fast =nums[0];
do{ //detect cycle
slow = nums[slow];
fast = nums[nums[fast]];
}while(slow!=fast);
//find starting point (duplicate number)
slow = nums[0];
while(slow!=fast){
slow =nums[slow];
fast = nums[fast];
}
return slow;
}
int findDuplicateBruteForce(vector<int>&nums){//O(n log n)
if(nums.size()<2)return -1;
sort(nums.begin(),nums.end());
for(int i=0;i<nums.size()-1;i++){
if(nums[i]==nums[i+1]){
return nums[i];
}
}
return -1;
}
int main(){
int n;
cout<<"enter the size of array ";
cin>>n;
vector<int>v(n);
cout<<"enter the elements of array ";
for(int i=0;i<n;i++){
cin>>v[i];
}
cout<<"Duplicate elements is uoset "<<findDuplicateUsingSet(v)<<endl;
cout<<"Duplicate elements is uomap "<<findDuplicateUsingUnorderedMap
(v)<<endl;
cout<<"Duplicate elements is using map "<<findDuplicateUsingMap(v)<<endl;
cout<<"Duplicate elements is using FloydsCycle "<<FloydsCycle(v)<<endl;
cout<<"Duplicate elements is using BruteForce "<<findDuplicateBruteForce(v)<<endl;
return 0;
}
