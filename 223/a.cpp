#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int x;
    cin >> x;
    if(x == 0) cout << "No" << endl;
    else if(x % 100 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}