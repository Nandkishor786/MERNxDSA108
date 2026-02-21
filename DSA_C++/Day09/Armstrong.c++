#include<iostream>
using namespace std;
 
int power(int base, int exp){
   int result =1;
   for(int i=0;i<exp;i++){
       result *=base;
   }
   return result;
}
bool isArmstrong (int n){
  int rem,sum =0,digits=0;
  int original =n;
  int temp =n;
  while(temp>0){
    digits++;
    temp /=10;
  }
  while(n>0){
    rem = n%10;
    sum += power(rem,digits);
    //pow() function double return karta hai,
// isliye kabhi-kabhi precision issue aa sakta hai.
    n /=10;
   }
return sum==original;
}

int main(){
 int n;
 cout<<"Enter the Number "<<endl;
 cin>>n;
 if(isArmstrong(n))
  cout<<"Armstrong number";
else
cout<<" not Armstrong number";
  return 0;
}

//Armstrong number means sum of digits raised to the power of total digits equals the original number.