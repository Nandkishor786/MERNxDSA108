#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
  int s=0;
  int e =height.size()-1;
  long long maxwater=0;
  while(s<e){
   int h =min(height[s],height[e]);
   int b =e-s;
   long long currwater = h*b;
  maxwater =max(currwater,maxwater);
   if(height[s]<height[e])s++;
    else e--;
  }
  return (int)maxwater;
}

int main(){

int n;
cout<<"enter the size of array"<<endl;
cin>>n;
vector<int>v(n);
cout<<"enter the heights"<<endl;
for(int i=0;i<n;i++){
  cin>>v[i];
}
cout<<"max water is :"<<maxArea(v);
  return 0;

}
