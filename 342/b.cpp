#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, p, q, a, b;
    cin >> n;
    map<int, int> mp;
    rep(i, n) {
        cin >> p;
        mp[p] = i+1;
    }
    cin >> q;
    while(q--) {
        cin >> a >> b;
        if(mp[a] < mp[b]) cout << a << endl;
        else cout << b << endl;
    }
    return 0;
}