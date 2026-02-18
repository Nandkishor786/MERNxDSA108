#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int>& nums, vector<int>& temp,
               vector<vector<int>>& ans, vector<bool>& used)
{
    // base case
    if (temp.size() == nums.size()) {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;

        used[i] = true;
        temp.push_back(nums[i]);

        backtrack(nums, temp, ans, used);

        // backtrack
        temp.pop_back();
        used[i] = false;
    }
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> used(nums.size(), false);

    backtrack(nums, temp, ans, used);

    // print permutations
    // for (auto &v : ans) {
    //     for (int x : v)
    //         cout << x << " ";
    //     cout << endl;
    // }

   
for (auto it = ans.begin(); it != ans.end(); it++) {
    for (int x : *it) {
        cout << x << " ";
    }
    cout << endl;
}


    return 0;
}
//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

