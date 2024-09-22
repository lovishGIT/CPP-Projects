#include<bits/stdc++.h>
using namespace std;

int finalState(vector<vector<int>>& operations) {
    vector<int> switches(100001, 0);

    int q = operations.size();

    for(int i = 0; i < q; i++) {
        int l = operations[i][0];
        int r = operations[i][1];
        switches[l]++;
        if (r + 1 <= 100000) {
            switches[r + 1]--;
        }
    }

    int sum = 0;
    int current = 0;
    for(int i = 1; i <= 100000; i++) {
        current += switches[i];
        if (current % 2 == 1) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> operations;
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        int x1, x2;
        cin >> x1 >> x2;
        temp.push_back(x1);
        temp.push_back(x1);
        operations.push_back(temp);
    }

    cout<< finalState(operations);
    return 0;
}