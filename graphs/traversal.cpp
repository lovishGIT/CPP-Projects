#include<bits/stdc++.h>
using namespace std;
void bfs(map<int, vector<int>> &adjList, int start, vector<bool> &vis) {
    queue<int> que;
    que.push(start);
    vis[start-1]= true;
    while(!que.empty()) {
        auto itr= que.front();
        cout<< itr<< " ";
        que.pop();
        for(auto temp: adjList[itr]) {
            if(!vis[temp-1]) {
                que.push(temp);
                vis[temp-1]= true;
            }
        }
    }
}
void dfs(map<int, vector<int>> &adjList, int start, vector<bool> &vis) {
    vis[start-1] = true;
    cout<< start<< " ";
    for(int temp: adjList[start]) {
        if(!vis[temp-1]) {
            dfs(adjList, temp, vis);
        }
    }
}
int main() {
    int n, e;
    cin>> n>> e;
    map<int, vector<int>> adjList;
    for(int i=0; i<e; i++) {
        int x, y;
        cin>> x>> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    vector<bool> vis(n, false);
    // bfs(adjList, 1, vis);
    dfs(adjList, 3, vis);
    return 0;
}

// 9
// 9   
// 1 2
// 1 6
// 2 3
// 2 4
// 6 7
// 6 9
// 4 5
// 7 8
// 5 8

// 8
// 8
// 1 2
// 1 3
// 2 5
// 2 6
// 3 4
// 4 8
// 8 7
// 7 3