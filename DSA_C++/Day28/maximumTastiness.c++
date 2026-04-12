#include<bits/stdc++.h>
using namespace std;

   int maximumTastiness(vector<int>& price, int k) {
  for(int i=0;i<price.size()-k;i++){
      


  }
        
    }

int main(){

int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int k;
cout<<"enter no. of distinct candy in basket can have  "<<endl;
cin>>k;
vector<int>v(n);
cout<<"enter the prices"<<endl;
for(int i=0;i<n;i++){
  cin>>v[i];
}
cout<<"max tastiness is :"<<maximumTastiness(v,k);
  return 0;

}
