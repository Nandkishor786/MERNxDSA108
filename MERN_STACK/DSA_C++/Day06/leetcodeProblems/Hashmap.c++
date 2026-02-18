#include<iostream>
using namespace std;
#include <vector>
#include <map>

//  Input
// ["MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"]
// [[], [1, 1], [2, 2], [1], [3], [2, 1], [2], [2], [2]]
// Output
// [null, null, null, 1, -1, null, 1, null, -1]
class MyHashMap {
  public:
  vector<map<int ,int>>data;
  static const int Buckets = 10000;
public:
 int hashfun(int key){
      return key%Buckets;
 }
    MyHashMap() {
        data.resize(Buckets);
    }
    
    void put(int key, int value) {
         int Bucketidx  =hashfun(key);
         data[Bucketidx][key] =value;
    }
    
    int get(int key) {
        int Bucketidx =hashfun(key);
        if(data[Bucketidx].find(key)!=data[Bucketidx].end())  return data[Bucketidx][key];

         return -1;
     }
    
    void remove(int key) {
        int Bucketidx =hashfun(key);
        data[Bucketidx].erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

int main(){

  
  return 0;

}