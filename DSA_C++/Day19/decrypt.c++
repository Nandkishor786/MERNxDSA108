#include<bits/stdc++.h>
using namespace std;

vector<int> decrypt(vector<int>& code, int k) {

    int n = code.size();
    vector<int> result(n,0);

    if(k==0) return result;

    int L = abs(k);

    for(int i=0;i<n;i++){

        int windowSum = 0;

        if(k>0){
            for(int j=1;j<=L;j++){
                windowSum += code[(i+j)%n];
            }
        }
        else{
            for(int j=1;j<=L;j++){
                windowSum += code[(i-j+n)%n];
            }
        }

        result[i] = windowSum;
    }

    return result;
}

int main(){
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  vector<int>v(n);
  cout<<"enter the array elements ";
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
   int k;
   cout<<"enter the key ";
   cin>>k;
  
   vector<int>result =decrypt(v,k);
   cout<<"result is "<<endl;
   for(int num:result){
      cout<<num<<" ";
   }
   return 0;
}