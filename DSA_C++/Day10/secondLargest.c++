#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

//optimal
int secondLargest(int arr[],int n){ //o(n)
  if(n<2)return -1;
  int secondLargest = INT_MIN;
  int Largest =INT_MIN;
  for(int i=0;i<n;i++){
     if(arr[i]>Largest){
    secondLargest =Largest;
    Largest =arr[i];
     }
     else if(arr[i]>secondLargest && arr[i]!=Largest){
      secondLargest =arr[i];//check distinct elements
     }
  }
  if (secondLargest==INT_MIN)return -1;
  return secondLargest;
}
//brute force
int SecondLargest(int arr[],int n){ //o(nlogn)
  if(n<2)return -1;
    sort(arr,arr+n);
    int largest = arr[n-1];
    for (int i=n-2;i>=0;i--){
      if(arr[i]!=largest){
        return arr[i];
      }
    }
    return -1;
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
 cout<<" secondLargest optimal is "<< secondLargest(arr,n)<<endl;
cout<<" secondLargest brute force is "<< SecondLargest(arr,n)<<endl;
 

 delete[] arr;
  return 0;

}