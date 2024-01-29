#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

bool snuke_check(char pre, char nex) {
    bool res = false;
    if(pre == 's' && nex == 'n') res = true;
    else if(pre == 'n' && nex == 'u') res = true;
    else if(pre == 'u' && nex == 'k') res = true;
    else if(pre == 'k' && nex == 'e') res = true;
    else if(pre == 'e' && nex == 's') res = true;
    return res;
}
int main() {
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i, h) cin >> s[i];
    vector<vector<int> > g(h * w);
    
    rep(i, h) {
        rep(j, w) {
            if(i != 0) {
                if(snuke_check(s[i][j], s[i-1][j])) g[w * i + j].push_back(w * (i-1) + j);
            }
            if(i != h-1) {
                if(snuke_check(s[i][j], s[i+1][j])) g[w * i + j].push_back(w * (i+1) + j);
            }
            if(j != 0) {
                if(snuke_check(s[i][j], s[i][j-1])) g[w * i + j].push_back(w * i + j - 1);
            }
            if(j != w-1) {
                if(snuke_check(s[i][j], s[i][j+1])) g[w * i + j].push_back(w * i + j + 1);
            }
        }
    }
    
    bool visited[h * w], flag = false;
    rep(i, h * w) visited[i] = false;
    stack<int> st;
    st.push(0);
    while(!st.empty()) {
        int pos = st.top();
        st.pop();
        if(pos == h * w - 1) {
            flag = true;
            break;
        }
        for(int v : g[pos]) {
            if(!visited[v]) {
                st.push(v);
                visited[v] = true;
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
