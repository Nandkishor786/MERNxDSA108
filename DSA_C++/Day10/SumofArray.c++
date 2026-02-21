#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int sumUsingLoop(const vector<int>& num){
    int sum = 0;
    for(int i = 0; i < num.size(); i++){
        sum += num[i];
    }
    return sum;
}

int sumUsingRangeLoop(const vector<int>& num){
    int sum = 0;
    for(int x : num){
        sum += x;
    }
    return sum;
}

int sumUsingSTL(const vector<int>& num){
    return accumulate(num.begin(), num.end(), 0);
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << "Sum using normal loop: " << sumUsingLoop(v) << endl;
    cout << "Sum using range loop: " << sumUsingRangeLoop(v) << endl;
    cout << "Sum using STL accumulate: " << sumUsingSTL(v) << endl;

    return 0;
}