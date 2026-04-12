#include<bits/stdc++.h>
using namespace std;

int main(){

   int duration;
   cout<<"enter the duration"<<endl;
   cin>>duration;

   switch(duration){
    case 1:
    cout<<"2000"<<endl;
    break;
    case 3:
    cout<<"5000"<<endl;
    break;
    case 6:
    cout<<"9000"<<endl;
    break; 
    case 9:
    cout<<"12000"<<endl;
    break;
    case 12:
    cout<<"15000"<<endl;
    break;
    default:
    cout<<"enter the valid choice"<<endl;
   }

  return 0;
}