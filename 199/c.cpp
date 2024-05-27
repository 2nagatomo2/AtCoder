#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int n, q, t, a, b, state = 0;
    string s;
    cin >> n >> s >> q;
    vector<int> s1(n), s2(n);
    rep(i, n) s1[i] = i;
    rep(i, n) s2[i] = i+n;
    while (q--) {
        cin >> t >> a >> b;
        a--;
        b--;
        switch (t)
        {
        case 1:
            if(a >= n) {
                a -= n;
                if(b >= n) {
                    b -= n;
                    if(state == 0) swap(s2[a], s2[b]);
                    else swap(s1[a], s1[b]);
                } else {
                    if(state == 0) swap(s2[a], s1[b]);
                    else swap(s1[a], s2[b]);
                }
            } else {
                if(b >= n) {
                    b -= n;
                    if(state == 0) swap(s1[a], s2[b]);
                    else swap(s2[a], s1[b]);
                } else {
                    if(state == 0) swap(s1[a], s1[b]);
                    else swap(s2[a], s2[b]);
                }
            }
            break;
        case 2:
            state = (state + 1) % 2;
            break;
        }
    }
    if(state == 0) {
        rep(i, n) cout << s[s1[i]];
        rep(i, n) cout << s[s2[i]];
    } else {
        rep(i, n) cout << s[s2[i]];
        rep(i, n) cout << s[s1[i]];
    }
    cout << endl;
    return 0;
}