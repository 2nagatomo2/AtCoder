#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    int c, sum = 0;
    rep(i, n){
        cin >> s[i] >> c;
        sum += c;
    }
    sort(s.begin(), s.end());
    cout << s[sum % n] << endl;
    return 0;
}