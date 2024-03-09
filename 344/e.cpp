#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

struct Node{
    int pre, nxt;
    Node(int pre = -1, int nxt = -1): pre(pre), nxt(nxt){}
};

int main() {
    int n, q, x, y, query;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, Node> mp;
    rep(i, n) cin >> a[i];
    rep(i, n) {
        if (n == 1) {
            mp[a[0]] = {-1, -1};
            continue;
        }
        if(i == 0) {
            mp[a[0]] = {-1, a[1]};
        } else if(i == n-1) {
            mp[a[n-1]] = {a[n-2], -1};
        } else {
            mp[a[i]] = {a[i-1], a[i+1]};
        }
    }
    cin >> q;
    int start = a[0];
    while(q--) {
        cin >> query;
        switch (query) {
        case 1:
            cin >> x >> y;
            mp[y] = {x, mp[x].nxt};
            if(mp[x].nxt != -1) mp[mp[x].nxt].pre = y;
            mp[x].nxt = y;
            break;
        case 2:
            cin >> x;
            if(mp[x].pre == -1) {
                start = mp[x].nxt;
                mp[mp[x].nxt].pre = -1;
            } else if(mp[x].nxt == -1) {
                mp[mp[x].pre].nxt = -1;
            } else {
                mp[mp[x].pre].nxt = mp[x].nxt;
                mp[mp[x].nxt].pre = mp[x].pre;
            }
            mp.erase(x);
            break;
        default:
            break;
        }
    }

    int now = start;
    while(now != -1) {
        cout << now << ' ';
        now = mp[now].nxt;
    }
    cout << endl;
    return 0;
}