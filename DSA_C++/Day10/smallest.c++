#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
//optimal
int smallest(int arr[],int n){ //o(n)
  if(n==0)return -1;
  int smallest = INT_MAX;
   for(int i=0;i<n;i++){
     if(arr[i]<smallest){
         smallest =arr[i];
        }
     }
     return smallest;
   }
   //brute force
   int Smallest(int arr[],int n){ //o(nlogn)
  if(n==0)return -1;
     sort(arr,arr+n);
     return arr[0];
   }
   //brute force
   int Secondsmallest(int arr[],int n){ //o(nlogn)
    if(n<2)return -1;
     sort(arr,arr+n);
     int smallest =arr[0];
     for(int i=1;i<n;i++){
      if(arr[i]!=smallest)
      return arr[i];
     }
     return -1;
   }  
//optimal
int secondsmallest(int arr[],int n){ //o(n)
  if(n<2)return -1;
  int smallest = INT_MAX;
  int secondsmallest = INT_MAX;
   for(int i=0;i<n;i++){
     if(arr[i]<smallest){
      secondsmallest =smallest;
        smallest =arr[i];
      }
      else if(arr[i]<secondsmallest &&arr[i]!=smallest)
      {
        secondsmallest =arr[i];
      }
     }
   if(secondsmallest == INT_MAX)
        return -1;
     return secondsmallest;
   }
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int *arr =new int[n];
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
  cout<<"Smallest elements is (optimal) "<<smallest(arr,n)<<endl;
    cout<<"Smallest elements is (brute force) "<<Smallest(arr,n)<<endl;
     cout<<"secondSmallest elements is (brute force) "<<Secondsmallest(arr,n)<<endl;
     cout<<"secondSmallest elements is (optimal) "<<secondsmallest(arr,n)<<endl;
  delete[] arr;
  return 0;
}