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
    int a[n];
    deque<int> dq;
    rep(i, n) {
        cin >> a[i];
        dq.push_back(a[i]);
    
        if(dq.size() <= 1) continue;
        else {
            while(true) {
                if(dq.size() <= 1) break;
                int back1 = dq.back();
                dq.pop_back();
                int back2 = dq.back();
                if(back1 == back2) {
                    dq.pop_back();
                    dq.push_back(back1+1);
                } else {
                    dq.push_back(back1);
                    break;
                }
            }
        }
    }
    cout << dq.size() << endl;
    return 0;
}