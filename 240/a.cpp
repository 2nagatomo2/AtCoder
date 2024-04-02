#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int a, b;
    cin >> a >> b;
    if(abs((a % 10) - (b % 10)) == 1 || b - a == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}