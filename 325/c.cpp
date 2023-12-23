#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    string s[h+2];
    rep(i, h) {
        cin >> s[i+1];
        s[i+1] = '.' + s[i+1] + '.';
    }
    rep(i, w+2) {
        s[0] += '.';
        s[h+1] += '.';
    }
    
    vector<vector<bool> > visited(h+1, vector<bool>(w+1, false));
    stack<pair<int, int> > st;
    int ans = 0;

    rep(i, h) rep(j, w) {
        if(s[i+1][j+1] == '#' && !visited[i+1][j+1]) {
            ans++;
            st.push(make_pair(i+1, j+1));
            visited[i+1][j+1] = true;
            while(!st.empty()) {
                pair<int, int> v = st.top();
                st.pop();
                for(int k=-1; k<2; k++) {
                    for(int l=-1; l<2;l++) {
                        if(k==0 && l==0) continue;
                        if(s[v.first+k][v.second+l] == '#' && !visited[v.first+k][v.second+l]) {
                            st.push(make_pair(v.first+k, v.second+l));
                            visited[v.first+k][v.second+l] = true;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}