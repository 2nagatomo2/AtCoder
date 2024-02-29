#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n], runner[n];
    rep(i, n) {
        cin >> a[i];
        runner[i] = 0;
    }
    int p = 0;
    rep(i, n) {
        rep(j, i+1) {
            if(runner[j] >= 4) continue;
            
            runner[j] += a[i];
            if(runner[j] >= 4) p++;
        }
    }
    cout << p << endl;
    return 0;
}