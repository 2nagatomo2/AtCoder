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
    int lim = 20, l = 1, r = N, mid, x;
    while(lim--) {
        mid = (l + r) / 2;
        cout << "? " << mid << endl;
        cin >> x;
        if(x == 0) l = mid;
        else r = mid;
        if(r - l <= 1) break;
    }
    cout << "! " << l << endl;
    return 0;
}