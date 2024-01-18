#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int f = 0;
    string s;
    rep(i, n) {
        cin >> s;
        if(s == "For") f++;
    }
    if(f >= (n+1) / 2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}