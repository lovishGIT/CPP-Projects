#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums) {
    int dig = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[dig] != nums[i]) return false;
    }
    return true;
}
void change(vector<int> &nums, int k) {
    // increment
    for (int i = 0; i < nums.size() - 1; i++) nums[i] += k;

    // sort
    int ele = nums[nums.size() - 1];
    int i = nums.size() - 2;
    while (i >= 0 && nums[i] > ele) {
        nums[i + 1] = nums[i];
        i--;
    }
    nums[i + 1] = ele;

    // temp printing
    cout<<  k << " -> ";
    for (auto i : nums) cout << i << " "; cout << endl;
}
int find_nMax(vector<int> &nums) {
    int i = nums.size() - 2;
    while (i >= 0 && nums[i] > nums[nums.size()-1]) i--;

    return nums.size() - i - 1;
}
int minMoves(vector<int> &nums) {
    int n = nums.size();
    if (n <= 1) return 0;
    sort(nums.begin(), nums.end());

    int moves = 0;
    int nMax = 1;
    while (!check(nums)) {
        int temp = (nums[n - 1] - nums[0]) / find_nMax(nums);
        if (temp == 0) temp = 1;
        moves += temp;
        change(nums, temp);
    }
    return moves;
}

int main() {
    // vector<int> nums1 = {1, 2, 3};
    // cout << minMoves(nums1) << endl;

    // vector<int> nums2 = {1, 2, 4, 4};
    // cout << minMoves(nums2) << endl;

    // vector<int> nums3 = {1, 2, 3, 4, 5};
    // cout << minMoves(nums3) << endl;

    // vector<int> nums4 = {1, 2, 3, 4, 5, 6};
    // cout << minMoves(nums4) << endl;
    return 0;
}