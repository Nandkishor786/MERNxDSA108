#include<bits/stdc++.h>
using namespace std;

int DivisorSum(int n){
    int sum =0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
         sum +=i;
         if(i!=n/i){
         sum +=n/i;
      }
     }
    }
return sum;
}
int main(){

 int n;
 cout<<"enter the number "<<endl;
 cin>>n;
 cout<<"DivisorSum is : "<<DivisorSum(n)<<endl;

  return 0;
}