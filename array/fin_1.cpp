#include<bits/stdc++.h>
using namespace std; 

void findingOne(int arr[3][3], int n, int m) {
    vector<vector<int>> ans;
    for(int i=0; i<n; i++) {
        vector<int> vect;
        for(int j=0; j<m; j++) {
            vect.push_back(0);
        }
        ans.push_back(vect);
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j] == 1) {
                ans[i][j] = 1;
                for(int k=0; k<n; k++) {
                    ans[i][k]= 1;
                    ans[k][j]= 1;
                }
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<< ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int arr[3][3]= {{1,0,1},{0,0,0},{0,0,0}};
    findingOne(arr, 3, 3);

    return 0;
}