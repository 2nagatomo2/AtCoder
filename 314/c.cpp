#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    string s, ans = "";
    cin >> n >> m >> s;
    vector<deque<char> > c(m);
    int color, c_lst[n];
    rep(i, n) {
        cin >> color;
        color--;
        c_lst[i] = color;
        c[color].push_back(s[i]);
    }

    rep(i, m) {
        char tmp = c[i].back();
        c[i].pop_back();
        c[i].push_front(tmp);
    }

    rep(i, n) {
        char x = c[c_lst[i]].front();
        ans += x;
        c[c_lst[i]].pop_front();
    }

    cout << ans << endl;
    return 0;
}