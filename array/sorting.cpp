#include<iostream>
#include<vector>
using namespace std;

// void selection_sort(int *arr, int n) {
//     int min;
//     for (int i=0; i<n; i++)
//     {
//         min= i;
//         for(int j= i+1; j<n; j++) {
//             if(arr[min] > arr[j]) {
//                 // Storing index of smallest j-1
//                 min= j;
//             }
//         }
//         // swaping smallest to its place
//         int temp= arr[min];
//         arr[min]= arr[i];
//         arr[i]= temp;
//     }
// }

// void bubble_sort(int *arr, int n) {
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(arr[i] > arr[j]) {
//                 //pushing bigger one to right
//                 int temp= arr[i];
//                 arr[i]= arr[j];
//                 arr[j]= temp;
//             }
//         }
//     }
// }

// void insertion_sort(int *arr, int n) {
//     for (int i = 1; i < n; i++) {
//         for(int j= i; j > 0; j--) {
//             // cout<< "Comparison of: "<< j << " " << j-1 << endl;
//             if(arr[j-1] > arr[j]) {
//                 // cout<< "swap" <<endl;
//                 int temp= arr[j-1];
//                 arr[j-1]= arr[j];
//                 arr[j]= temp;
//             }
//             else
//                 continue;
//         }
//     }
// }
// void insertion_sort_2(int *arr, int n) {
//     for(int i=1; i<n; i++) {
//         int curr= arr[i];
//         int j= i-1;
//         while(j>=0 && arr[j]>curr) {
//             arr[j+1] = arr[j];
//             j--;  
//         }
//         arr[j+1]= curr;
//     }
// }

// void merge_sort(int *arr, int low, int high) {

//     if(low >= high) return;

//     int mid= (low + high) / 2;
//     merge_sort(arr, low, mid);
//     merge_sort(arr, mid+1, high);

//     //merger
//     vector<int> temp;
//     int start1= low;
//     int start2= mid+1; 
//     while(start1 <= mid && start2 <= high ) {
//         if(arr[start1] <= arr[start2]) {
//             temp.push_back(arr[start1]);
//             start1++;
//         }
//         else  {
//             temp.push_back(arr[start2]);
//             start2++;
//         }
//     }
//     while(start1 <= mid) {
//         temp.push_back(arr[start1]);
//         start1++;
//     }
//     while(start2 <= high ) {
//         temp.push_back(arr[start2]);
//         start2++;
//     }

//     for(int i= low; i<high; i++) {
//         arr[i]= temp[i-low];
//     }
// }
// int qs_func(int *arr, int low, int high) {
//     int pivot= low;
//     int i= low;
//     int j= high;
//     while(i<j) {
//         while (arr[i] <= arr[pivot] && i < high) {
//             i++;
//         } // found Greater in i
//         while (arr[j] > arr[pivot] && j > low) {
//             j--;
//         } // found Smaller in j 
//         if(i<j) {
//             cout<< arr[pivot] << arr[i] << arr[j] << endl;
//             int temp= arr[i];
//             arr[i]= arr[j];
//             arr[j]= temp;
//         }
//     }
//     int temp= arr[j];
//     arr[j]= arr[pivot];
//     arr[pivot]= temp;

//     return j;
// }
// void quick_sort(int *arr, int low, int high) {
//     if(low >= high) {
//         return;
//     }
//     int mid= qs_func(arr, low, high);  // mid is index of pivot
//     quick_sort(arr, low, mid-1);
//     quick_sort(arr, mid+1, high);
// }

int main() {
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>> arr[i];
    }
    
    // selection_sort(arr, n);
    // bubble_sort(arr, n);
    // insertion_sort(arr, n);
    // insertion_sort_2(arr, n);
    // merge_sort(arr, 0, n-1);
    // quick_sort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<< arr[i] <<" ";
    } 
    return 0;
}

