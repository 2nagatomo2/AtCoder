#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int q, x, c, query;
    map<int, int> s;
    cin >> q;
    while(q--) {
        cin >> query;
        switch (query) {
        case 1:
            cin >> x;
            s[x]++;
            break;
        case 2:
            cin >> x >> c;
            if(s[x] > c) s[x] -= c;
            else s.erase(x);
            break;
        case 3:
            cout << s.rbegin()->first - s.begin()->first << endl;
        default:
            break;
        }
    }
    return 0;
}