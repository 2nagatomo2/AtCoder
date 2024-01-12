#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    set<pair<int, int> > visited;
    visited.insert(make_pair(x, y));
    rep(i, n) {
        switch (s[i])
        {
        case 'R':
            x++;
            break;
        case 'L':
            x--;
            break;
        case 'U':
            y++;
            break;
        case 'D':
            y--;
            break;
        default:
            break;
        }
        visited.insert(make_pair(x, y));
    }
    if(visited.size() == n + 1) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}