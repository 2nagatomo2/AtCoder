#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    int h, w, n, r, c, sh, sw, gh, gw, x;
    cin >> h >> w;
    vector<string> a(h);
    rep(i, h) cin >> a[i];
    rep(i, h) rep(j, w) {
        if(a[i][j] == 'S') sh = i, sw = j;
        if(a[i][j] == 'T') gh = i, gw = j;
    }
    cin >> n;
    vector<pii> p;
    vector<int> e;
    p.push_back({sh, sw});
    e.push_back(0);
    rep(i, n) {
        cin >> r >> c >> x;
        r--;
        c--;
        p.push_back({r, c});
        e.push_back(x);
    }
    p.push_back({gh, gw});
    e.push_back(0);

    map<pii, int> mp;
    rep(i, n+2) mp[p[i]] = i;
    vector<set<int>> reach(n+2);

    if(mp[{sh, sw}] == 0) {
        cout << "No" << endl;
        return 0;
    }

    rep(i, n+2) {
        queue<pii> que;
        queue<int> cost;
        vector<vector<bool>> visited(h, vector<bool>(w, false));
        que.push((p[i]));
        cost.push(0);
        visited[p[i].first][p[i].second] = true;
        while(!que.empty()) {
            int nh = que.front().first, nw = que.front().second, cos = cost.front();
            que.pop();
            cost.pop();
            if(cos >= e[i]+1) continue;
            if(mp.count({nh, nw})) reach[i].insert(mp[{nh, nw}]);
            if(nh > 0) if(!visited[nh-1][nw] && a[nh-1][nw] != '#') {
                que.push({nh-1, nw});
                cost.push(cos+1);
                visited[nh-1][nw] = true;
            }
            if(nw > 0) if(!visited[nh][nw-1] && a[nh][nw-1] != '#') {
                que.push({nh, nw-1});
                cost.push(cos+1);
                visited[nh][nw-1] = true;
            }
            if(nh < h-1) if(!visited[nh+1][nw] && a[nh+1][nw] != '#') {
                que.push({nh+1, nw});
                cost.push(cos+1);
                visited[nh+1][nw] = true;
            }
            if(nw < w-1) if(!visited[nh][nw+1] && a[nh][nw+1] != '#') {
                que.push({nh, nw+1});
                cost.push(cos+1);
                visited[nh][nw+1] = true;
            }
        }
    }

    stack<int> st;
    st.push(mp[{sh, sw}]);
    vector<bool> used(n+2, false);
    used[mp[{sh, sw}]] = true;
    while(!st.empty()) {
        int now = st.top();
        st.pop();
        for(int v : reach[now]) {
            if(v == n+1) {
                cout << "Yes" << endl;
                return 0;
            }
            if(!used[v]) {
                used[v] = true;
                st.push(v);
            }
        }
    }

    cout << "No" << endl;
    return 0;
}