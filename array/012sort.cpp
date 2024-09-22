#include<iostream>
using namespace std;
void sort012(int arr[], int n) {
    int first= 0;
    int last= n-1;

    while(arr[last] == 2) {
        last--;
    } // moved before first occurence of 2
    while(arr[first] == 0) {
        first++;
    } // moved after first occurence of 0

    int mid= first;

    while(mid>=first && mid<=last && first<last) {
        // cout<< first << ", "<<mid<< ", "<<last<<endl;

        if(arr[mid] == 0 && first != mid) {
            int temp= arr[first];
            arr[first]= arr[mid];
            arr[mid]= temp; 
            first++;
            continue;
        } // 0 hai to move in front

        else if(arr[mid] == 2) {
            int temp= arr[last];
            arr[last]= arr[mid];
            arr[mid]= temp;
            last--;
            continue;
        } // 2 hai to move in back

        mid++; 
    }
}
void answer(int arr[], int n) {
    int low= 0, mid= 0, high= n-1;
    while (mid<=high) {
        if(arr[mid] == 0) {
            int temp= arr[low];
            arr[low]= arr[mid];
            arr[mid]= temp;
            low++;
            mid++;
        } 
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            int temp= arr[mid];
            arr[mid]= arr[high];
            arr[high]= temp;
            high--;
        }
    }
}
int main() {
    int n;
    cin>> n;
    int arr[n]; 
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sort012(arr, n);
    // answer(arr, n);

    for (int i = 0; i < n; i++) {
        cout<< arr[i]<< " ";
    }
    return 0;
}