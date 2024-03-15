#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int N;
    cin >> N;
    map<string, int> mp;
    string s;
    int t;
    int ans = 0, mvp = 0;
    rep(i, N) {
        cin >> s >> t;
        if(!mp.count(s)) {
            mp[s] = t;
            if(mvp < t) {
                mvp = t;
                ans = i + 1;
            }
        }
    }

    cout << ans << endl;
    return 0;
}