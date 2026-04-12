#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"enter the no. of transaction"<<endl;
  cin>>n;
  unordered_map<string ,vector<int>>m(n);
   string s;
    string r;
    int t;
    int amount;
  cout<<"enter th sender,reciever time,amount"<<endl;
bool isfraud =false;


  //..........o(nlogn)................
//   for(int i=0;i<n;i++){
//     cin>>s>>r>>t>>amount;
//     string key = s+"_"+ r +"_"+to_string(amount);
//     m[key].push_back(t);
//   }
   
//   // for(auto it:m){
//   //   cout<<it.first<<"->";
//   //   for(int t:it.second){
//   //     cout<<t<<" ";
//   //   }
//   // }
// for(auto it:m){
//    auto v =it.second;
//    sort(v.begin(),v.end());
//    for(int i=0;i<v.size()-1;i++){
//        if(v[i+1]-v[i]<=60){
//         isfraud =true;
//         break;
//       }
//    }
//   if(isfraud)break;

//   }
//.............................

// for(int i=0;i<n;i++){//o(n)
//   cin>>s>>r>>t>>amount;
//   string key = s+"_"+r+"_"+to_string(amount);

//    for(int oldTime:m[key]){
//       if(abs(t-oldTime)<=60){
//         isfraud =true;
//         break;
//       }
//    }
//   m[key].push_back(t);
//   if(isfraud)break;
// }
// if(isfraud){
//     cout<<"fraud detected "<<endl;
//   }else{
//     cout<<"all transaction are valid"<<endl;
//   }
//........................

  unordered_map<string ,bool>seen(n);
  int prevtime =-1;
//with duplicate check
for(int i=0;i<n;i++){//o(n)
  cin>>s>>r>>t>>amount;
  string key = s+"_"+r;

  //duplicate check
   if(seen[key]){
    cout<<"Error: Duplicate Trasaction "<<endl;
    return 0;
   }
   //fraud check
   if(prevtime !=-1 && (t-prevtime)<=60){
    cout<<"fraud detected"<<endl;
    return 0;
   }
  seen[key] =true;
  prevtime =t;
 }
  cout<<" All valid trasaction "<<endl;
  return 0;
}