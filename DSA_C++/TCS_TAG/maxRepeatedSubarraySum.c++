#include <bits/stdc++.h>
using namespace std;

int maxRepeatedSubarraySum(vector<int>& arr) {
    int n = arr.size();
    unordered_map<long long, int> freq;
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            freq[sum]++;
            if (freq[sum] >= 2) {
                ans = max(ans, sum);
            }
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1,2,3,3,2,1};
    cout << maxRepeatedSubarraySum(arr);
    return 0;
}
