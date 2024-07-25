#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,b,n) for(int i=b; i<n; i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int fuct(int n) {
    if(n == 0) return 1;
    return n * fuct(n-1);
}

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> w;
    map<char, int> mp;
    rep(i, n) {
        w.push_back(i);
        mp[s[i]]++;
    }
    int ans = 0;
    do {
        string t = "";
        int cnt = 0;
        rep(i, n) t += s[w[i]];
        rep(i, n-k+1) {
            rep(j, k) {
                if(t[i+j] != t[i+k-j-1]) {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt == n-k+1) ans++;
    } while (next_permutation(all(w)));
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        ans /= fuct(itr->se);
    }
    cout << ans << endl;
    return 0;
}