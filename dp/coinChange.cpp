#include <bits/stdc++.h>
using namespace std;

int minimumElements(vector<int>& arr, int target) {
    int n = arr.size();
    
    vector<int> prev(target + 1, 0);
    vector<int> cur(target + 1, 0);
    
    for (int t = 0; t <= target; t++) {
        if (t % arr[0] == 0)
            prev[t] = t / arr[0];
        else
            prev[t] = 1e9;
    }
    
    for (int ind = 1; ind < n; ind++) {
        for (int t = 0; t <= target; t++) {
            int notTake = prev[t];
            
            int take = 1e9;
            if (arr[ind] <= t)
                take = 1 + cur[t - arr[ind]];
                
            cur[t] = min(notTake, take);
        }
        prev = cur;
    }
    
    int ans = prev[target];
    
    if (ans >= 1e9)
        return -1;
    
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3};
    int target = 7;
    
    int result = minimumElements(arr, target);
    
    cout << "The minimum number of coins required to form the t sum is " << result << endl;
    
    return 0; // Return 0 to indicate successful program execution
}

