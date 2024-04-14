#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, k, p;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> que;
    rep(i, n) {
        if(i < k) {
            cin >> p;
            que.push(p);
            if(i == k-1) {
                cout << que.top() << endl;
            }
        } else {
            cin >> p;
            if(p > que.top()) {
                que.pop();
                que.push(p);
            }
            cout << que.top() << endl;
        }
    }
    return 0;
}