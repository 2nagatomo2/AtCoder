#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    map<int, set<int> > follow;

    int t, a, b;
    while(q--) {
        cin >> t >> a >> b;
        switch (t)
        {
        case 1:
            follow[a].insert(b);
            break;
        case 2:
            follow[a].erase(b);
            break;
        case 3:
            if(follow[a].count(b) && follow[b].count(a)) cout << "Yes" << endl;
            else cout << "No" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}