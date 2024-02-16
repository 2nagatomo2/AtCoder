#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int L, R;
    cin >> L >> R;
    string s = "atcoder";
    cout << s.substr(L-1, R-L+1) << endl;
    return 0;
}