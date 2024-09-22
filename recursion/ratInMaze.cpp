#include <bits/stdc++.h>
using namespace std;

// vector<string> GoToPath(vector<string> &ans, vector<vector<int>> &m, vector<vector<int>> &vis, int n, string path = "", int i = 0, int j = 0)
// {
//     // If At Destination
//     if (i == n - 1 && j == n - 1)
// {
//         ans.push_back(path);
//         return ans;
//     }
//     // cout << "here";
//     // cout << i << j;
//     // cout << " " << vis[i + 1][j] << vis[i][j - 1] << vis[i][j + 1] << vis[i - 1][j] << "-";
//     if (i + 1 < n && vis[i + 1][j] == 0 && m[i + 1][j] == 1)
//     {
//         // cout << vis[i - 1][j] << "+" << i - 1 << "+" << j << "-  ";
//         // cout << path << " XD" << endl;
//         vis[i + 1][j] = 1;
//         ans = GoToPath(ans, m, vis, n, path + "D", i + 1, j); // D
//         vis[i + 1][j] = 0;
//     }
//     if (j - 1 >= 0 && vis[i][j - 1] == 0 && m[i][j - 1] == 1)
//     {
//         // cout << vis[i - 1][j] << "+" << i - 1 << "+" << j << "-  ";
//         // cout << path << " XL" << endl;
//         vis[i][j - 1] = 1;
//         ans = GoToPath(ans, m, vis, n, path + "L", i, j - 1); // L
//         vis[i][j - 1] = 0;
//     }
//     if (j + 1 < n && vis[i][j + 1] == 0 && m[i][j + 1] == 1)
//     {
//         // cout << vis[i - 1][j] << "+" << i - 1 << "+" << j << "-  ";
//         // cout << path << " XR" << endl;
//         vis[i][j + 1] = 1;
//         ans = GoToPath(ans, m, vis, n, path + "R", i, j + 1); // R
//         vis[i][j + 1] = 0;
//     }
//     if (i - 1 >= 0 && vis[i - 1][j] == 0 && m[i - 1][j] == 1)
//     {
//         // cout << vis[i - 1][j] << "+" << i - 1 << "+" << j << "-  ";
//         // cout << path << " XU" << endl;
//         vis[i - 1][j] = 1;
//         ans = GoToPath(ans, m, vis, n, path + "U", i - 1, j); // U
//         vis[i - 1][j] = 0;
//     }
//     return ans;
// }

// vector<string> findPath(vector<vector<int>> &m, int n)
// {
//     vector<string> answer;
//     vector<vector<int>> vis(n, vector<int>(n, 0));
//     if(m[0][0] == 0 || m[n-1][n-1] == 0) {
//         return answer;
//     }
//     vis[0][0] = 1;
//     GoToPath(answer, m, vis, n);
//     return answer;
// }

void GoToPath(vector<string> &ans, vector<vector<int>> &m, vector<vector<int>> &vis, int n, string path = "", int i = 0, int j = 0)
{
    // If At Destination
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }
    if (i + 1 < n && vis[i + 1][j] == 0 && m[i + 1][j] == 1)
    {
        vis[i + 1][j] = 1;
        GoToPath(ans, m, vis, n, path + "D", i + 1, j); // D
        vis[i + 1][j] = 0;
    }
    if (j - 1 >= 0 && vis[i][j - 1] == 0 && m[i][j - 1] == 1)
    {
        vis[i][j - 1] = 1;
        GoToPath(ans, m, vis, n, path + "L", i, j - 1); // L
        vis[i][j - 1] = 0;
    }
    if (j + 1 < n && vis[i][j + 1] == 0 && m[i][j + 1] == 1)
    {
        vis[i][j + 1] = 1;
        GoToPath(ans, m, vis, n, path + "R", i, j + 1); // R
        vis[i][j + 1] = 0;
    }
    if (i - 1 >= 0 && vis[i - 1][j] == 0 && m[i - 1][j] == 1)
    {
        vis[i - 1][j] = 1;
        GoToPath(ans, m, vis, n, path + "U", i - 1, j); // U
        vis[i - 1][j] = 0;
    }
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> answer;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
    {
        return answer;
    }
    vis[0][0] = 1;
    GoToPath(answer, m, vis, n);
    return answer;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    vector<string> answer = findPath(m, n);
    for (auto i : answer)
    {
        cout << i << endl;
    }
    return 0;
}
