#include<iostream>
using namespace std;

void stackExample(){
  int a=5;
  int arr[] ={1,2,3,4,5,6,7,8,9};
  cout<<"stack variable "<<a<<endl;
  cout<<" stack array "<<arr[0]<<endl;
  cout<<"memory is allocated and deallocated automatically and fast..";
}
void heapExample(){
  int* a= new int(10);
  int* arr = new int[3]{1,2,3};
  cout<<"heap variable "<<*a<<endl;
  cout<<" heap array "<<arr[2]<<endl;
  cout<<"Memory must be manually deallocated (Heap)";
  delete a;
  delete[] arr;
}
int main(){
stackExample();
heapExample();
return 0;
}