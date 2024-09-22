#include<iostream>
using namespace std;
// int linear_search(int *arr, int n, int target) {
//     for(int i=0; i<n; i++) {
//         if(arr[i]==target) 
//             return i;
//     }
//     return -1;
// }
// int binary_search(int *arr, int n, int target) {
//     int start=0;
//     int last=n-1;
//     int mid;
//     if(arr[start]==target) 
//         return start;
//     else if(arr[last]==target) 
//         return last;
//     while(start<last-1) {
//         mid= (start + last) / 2;
//         if(target == arr[mid]) {
//             return mid;
//         }
//         else if(target > arr[mid]) {
//             start= mid;
//         }
//         else {
//             last= mid;
//         }
//     }
//     return -1;
// }
int main() {
    int arr[]= {1,2,4,5,7,9,10,11,13,14,16,20,21,23,24,27,30,31,36,37,38,40};
    int target= 40;
    int n= sizeof(arr)/sizeof(arr[0]);
    // cout<< linear_search(arr, n, target);
    // cout<< binary_search(arr, n, target);
    return 0;
}