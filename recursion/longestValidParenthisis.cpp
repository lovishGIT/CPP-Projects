#include<iostream>
using namespace std;

    bool check_valid(string s, int i, int n) {
        int open = 0;
        for(;i<n;i++) {
            if(s[i] == '(') {
                open++;
            } else {
                open--;
            }
            if(open<0) return false;
            cout<< " ,open= " << open;
        }
        cout<<endl;
        if(open==0) return true;
        return false;
    }
    int go_rec(string s, int i, int n, int mx) {
        while(i<n && s[i]==')') i++;
        while(n>i && s[n-1]=='(') n--;
        if(i>=n || i<0 || n > s.length()) return 0;
        if(mx > (n-i)) return mx;
        cout<< n << " " << i << endl;

        if(check_valid(s, i, n)) {
            return max(mx, n-i);
        } else {
            int mx2= max(go_rec(s,i+1,n,mx), go_rec(s,i,n-1,mx));
            return max(mx, mx2);
        }
    }
    int main() {
        string s = ")(()(()(((())(((((()()))((((()()(()()())())())()))()()()())(())()()(((()))))()((()))(((())()((()()())((())))(())))())((()())()()((()((())))))((()(((((()((()))(()()(())))((()))()))())";
        return go_rec(s, 0, s.length(), 0);
    }