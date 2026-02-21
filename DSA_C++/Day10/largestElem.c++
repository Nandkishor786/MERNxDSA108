#include<iostream>
#include<climits>
#include<algorithm>
#include<functional>
using namespace std;

//Optimal Approach (Single Traversal)
int Largest(int arr[],int n){   //o(n)
  if(n == 0) return -1;
  int max = INT_MIN;
  for(int i =0;i<n;i++){
    if(arr[i]>max){
      max =arr[i];
    }
  }
  return max;
}
 
// Brute Force -sorting methods
int LargestEle(int arr[],int n){   //o(nlogn)
  if(n == 0) return -1;
   sort(arr ,arr+n);
  return arr[n-1];
}

int main(){
   int n;
   cout<<"enter the size of array.."<<endl;
   cin>>n;
   int *arr =new int[n];//dynamic memory using heap
   cout<<"enter the array elements"<<endl;
   for (int i=0;i<n;i++){
     cin>>arr[i];
   }
   cout<<"Largest element is From Optimal "<<Largest(arr,n)<<endl;
   cout<<"Largest element is From Brute Force "<<LargestEle(arr,n)<<endl;
  delete[] arr;
}