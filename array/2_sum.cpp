#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
bool SUM2BOOL(int arr[], int n, int target) {
    for(int i=0; i<n; i++) {
        for(int j= i+1; j<n; j++) {
            if(arr[i] + arr[j] == target) {
                return true;
            }
        }
    }
    return false;
}
string sum2index(int arr[], int n, int target) {
    map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]= i;
    }
    string str= "[";
    for(int i=0; i<n; i++) {
        int more= target - arr[i];
        if(mpp.find(more) != mpp.end()) {
            str+= i + '0';
            str+= ", ";
            str+= more + '0';
            str+= "]";
            return str;
        }
    }
    return "NOt found";
}
bool sum2pointer(int arr[], int n, int target) {
    int left= 0; int right= n-1;
    sort(arr, arr+n);
    while (left < right) {
        if(arr[left] + arr[right] == target) {
            return true;
        }
        else if(arr[left] + arr[right] > target) {
            right--;
        }
        else {
            left++;
        }
    }
    return false;
    
}
int main() {
    int n;
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>> arr[i];
    }

    int target;
    cin>> target;

    // cout<< ( SUM2BOOL(arr, n, target) ? "YES":"NO");
    // cout<< sum2index(arr, n, target); // not for duplicates
    cout<< ( sum2pointer(arr, n, target) ? "YES":"NO"); // not to give index
    return 0;
}