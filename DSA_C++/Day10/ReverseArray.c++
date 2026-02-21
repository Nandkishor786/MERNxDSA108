#include<iostream>
#include<algorithm>
using namespace std;
//two pointers
 void reverseArray(int arr[],int n){
    
    int left =0;
    int right =n-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
 }
 //using STL
  void reversearray(int arr[],int n){
     reverse(arr,arr+n);
 }
//using Brute Force methods
int Reversearray(int arr[],int n){
    int *newarr = new int[n];
    int j=0;
    //copy in new  array
    for(int i=n-1;i>=0;i--){
      newarr[j++] =arr[i];
    }
  //  copy in original
  int i=0;
   for(int j=0;j<n;j++){
      arr[i++] =newarr[j];
    }
    delete[] newarr;
  }
//using Brute Force methods
int ReverseARRAY(int arr[],int n){
    int newarr[n];
    int j=0;
//copy in new  array
    for(int i=n-1;i>=0;i--){
      newarr[j++] =arr[i];
    }
//copy in original
  int i=0;
   for(int j=0;j<n;j++){
      arr[i++] =newarr[j];
    }
   }

int main(){
   int n;
   cout<<"enter the value"<<endl;
   cin>>n;
   int *arr = new int [n];
   cout<<"enter the elements in array"<<endl;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"original array"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   reverseArray(arr,n);
   cout<<endl;
    cout<<"reverse array using two pointer"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   reversearray(arr,n);
   cout<<endl;
    cout<<"reverse array using STL"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

  Reversearray(arr,n);
   cout<<endl;
    cout<<"reverse array using Brute Force"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

    ReverseARRAY(arr,n);
   cout<<endl;
    cout<<"reverse array using Brute Force "<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

   delete[] arr;
  return 0;
}