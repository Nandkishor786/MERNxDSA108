#include<iostream>
using namespace std;
#include <vector>
#include <list>

// //using array
// class MyHashSet {
//   public:
//   vector<bool>data;
// public:
//     MyHashSet() {
//         data.resize(1000001, false);
//     }
//     void add(int key) {
//          data[key] =true;
//     }
    
//     void remove(int key) {
//         data[key]=false;
//     }
    
//     bool contains(int key) {
//          return data[key];
//     }
// };


class MyHashSet{
  public:
  static const int Buckets =10000;
  vector<list<int>>data;

  public:
  int hash(int key){
    return key%Buckets;
  }
  
  MyHashSet(){
    data.resize(Buckets);
  } 

  void add(int key){
     int idx =hash(key);
      for(int val:data[idx]){
          if(val==key)return;
      }
     data[idx].push_back(key);
  }
   void remove(int key){
        int idx =hash(key);
        data[idx].remove(key);
   }

   bool contains(int key){
     int idx =hash(key);
         for(int val:data[idx]){
          if(val==key)return true;
         }
         return false;
    }
};


int main(){

   vector<string>commands ={"MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"};
       vector<vector<int>> inputs = {{}, {1}, {2}, {1}, {3}, {2}, {2}, {2}, {2}};
      
       vector<string>output;
       MyHashSet*obj =nullptr;
       for(int i=0;i<commands.size();i++){
           if(commands[i]=="MyHashSet"){
            obj =new MyHashSet();
            output.push_back("null");
           }else if(commands[i]=="add"){
              obj->add(inputs[i][0]);
              output.push_back("null");
           }else if(commands[i]=="remove"){
              obj->remove(inputs[i][0]);
              output.push_back("null");
           }else if(commands[i]=="contains"){
              bool res =  obj->contains(inputs[i][0]);
              output.push_back(res ? "true":"false");
            }
       }
       cout<<"output is "<<endl;
   cout<<" [";
     for(auto num:output){
    cout<<num<<",";
     }
   cout<<" ]";

}