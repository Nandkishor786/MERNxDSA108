#include <bits/stdc++.h>
using namespace std;

int maxFlyPerson(int n,vector<int>&w,int y){

  sort(w.begin(),w.end());
  int maxcount =0;
  int i=0;
  while(i<n && y>=w[i]){
    y -= w[i++];
    maxcount++;
  }
return maxcount;
}
int main() {
    int n;
    cout<<"enter the number of persons"<<endl;
    cin>>n;
    cout<<"enter the weights of each persons"<<endl;
    vector<int>w(n);
    for(int i=0;i<n;i++){
      cin>>w[i];
    }
    int y;
    cout<<"enter the capacity of balloon"<<endl;
    cin>>y;
    cout<<maxFlyPerson(n,w,y);
 
    return 0;
}
