#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    int a[n], num_to_idx[n];
    rep(i, n) {
        cin >> a[i];
        a[i]--;
        num_to_idx[a[i]] = i;
    }

    vector<pair<int, int>> p;
    rep(i, n) {
        if(a[i] != i) {
            p.push_back({i, num_to_idx[i]});
            a[num_to_idx[i]] = a[i];
            num_to_idx[a[num_to_idx[i]]] = num_to_idx[i];
            a[i] = i;
            num_to_idx[i] = i;
        }
    }
    cout << p.size() << endl;
    rep(i, p.size()) {
        cout << p[i].first+1 << ' ' << p[i].second+1 << endl;
    }
    return 0;
}