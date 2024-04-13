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
    if(n < 10) cout << "AGC00" << n << endl;
    else if(n < 42) cout << "AGC0" << n << endl;
    else cout << "AGC0" << n+1 << endl;
    return 0;
}