#include <bits/stdc++.h>
using namespace std;

 void MultiplicationTable(int n, int limit){
    for (int i=1;i<=limit;i++){
      cout<<n <<" * "<<i<<" = "<<n*i<<endl;
    }
 }

int main(){
  int n,limit;
  cout<<"enter the number and limit "<<endl;
  cin>>n>>limit;
   cout<<"MultiplicationTable of  "<<n <<" is : "<<endl;
   MultiplicationTable(n,limit);

  return 0;
}
