#include<bits/stdc++.h>
using namespace std;
 
void sortingUsingSTL(vector<int>&nums){
  int choice;
  cout<<"press 1 for Ascending order and 2 for descending order  ";
  cin>>choice;
  if(choice==1){
     sort(nums.begin(),nums.end());
  }
  else{
    sort(nums.begin(),nums.end(),greater<int>());
  }
   cout<<"after sorting using STL..  "<<endl;
 }

 void bubbleSort(vector<int>&nums){
  for(int i=0;i<nums.size()-1;i++){
     for(int j=0;j<nums.size()-i-1;j++){
           if(nums[j]>nums[j+1]){
             swap(nums[j],nums[j+1]);
         }
     }
  }
  cout<<"after sorting Bubble sort..  "<<endl;
 }
 
void insertionSort(vector<int>&nums){
   for(int i=1;i<nums.size();i++){
    int key =nums[i];
    int j=i-1;
    while(j >=0 && nums[j]>key){
      nums[j+1] = nums[j];
      j--;
    }
    nums[j+1]=key;
   }
cout<<"after sorting using insertionSort"<<endl;
}

void selectionSort(vector<int>&nums){
   for(int i=0;i<nums.size();i++){
      int minIndex = i;
      for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[minIndex]){
              minIndex =j;
         }
      }
  swap(nums[minIndex],nums[i]);
   }
  cout<<"selectionSort"<<endl;
}

void merge(vector<int>&nums,int left,int mid,int right){
  int n1 =mid-left+1;
  int n2 =right-mid;
  vector<int>L(n1);
  vector<int>R(n2);
  for(int i=0;i<L.size();i++){
    L[i] = nums[left+i];
  }
  for(int j=0;j<R.size();j++){
    R[j] = nums[mid+1+j];
  }
  int i=0,j=0,k=left;
  while(i<n1 && j<n2 ){
     if(L[i]<=R[j]){
      nums[k] =L[i];
      i++;
     }else{
       nums[k] =R[j];
       j++;
     }
     k++;
  }
  while(i<n1){
    nums[k] =L[i];
    i++;
    k++;
  }
  while(j<n2){
    nums[k]=R[j];
    j++;
    k++;
  }
}
void mergeSort(vector<int>&nums ,int left,int right){
  if(left<right){
    int mid = left+(right-left)/2;
    mergeSort(nums,left,mid);
    mergeSort(nums,mid+1,right);
    merge(nums,left,mid,right);
  }
  cout<<"mergeSort"<<endl;
}

int partition(vector<int>&nums,int s,int e){

  int pivot  =nums[s];
  int count =0;
  for(int i=s+1;i<=e;i++){
    if(nums[i]<=pivot){
      count++;
    }
  }
  int pivotIndex = s+count;
  swap(nums[pivotIndex],nums[s]);
  int i=s,j=e;
  while(i<pivotIndex && j>pivotIndex){
       while(nums[i]<pivot){
        i++;
       }
       while(nums[j]>pivot){
        j--;
       }

    if(i<pivotIndex && j>pivotIndex){
      swap(nums[i++],nums[j--]);
    }
  }
  return pivotIndex;
}
void quickSort(vector<int>&nums,int s,int e){
  if(s>=e)return;
  int p=partition(nums,s,e);
  quickSort(nums,s,p-1);
  quickSort(nums,p+1,e);

  cout<<"quickSort"<<endl;
}

int main(){
 int n;
 cout<<"enter the array size  ";
 cin>>n;
 vector<int>v(n);
 cout<<"enter the array elements  ";
 for(int i=0;i<n;i++){
  cin>>v[i];
 }
 cout<<"Menu for sorting.."<<endl;
 cout<<"1. sorting using STL in descending order.."<<endl;
  cout<<"2. Bubble sort.."<<endl;
 cout<<"3. insertion sort.."<<endl;
 cout<<"4. selection sort.."<<endl;
 cout<<"5. quick sort.."<<endl;
 cout<<"6. merge sort.."<<endl;

 int num;
 cout<<"enter the choice for sorting...  ";
 cin>>num;
 
 switch(num){
  case 1:
      sortingUsingSTL(v);
      break;
  case 2:
       bubbleSort(v);
      break;
  case 3:
      insertionSort(v);
      break;
  case 4:
       selectionSort(v);
      break;
  case 5:
      quickSort(v,0,v.size()-1);
      break;
  case 6:
       mergeSort(v,0,v.size()-1);
      break;
  default :
   cout<<"enter the Valid Choice "<<endl;
 }

 for(int num:v){
  cout<<num<<" ";
 }
  return 0;
}