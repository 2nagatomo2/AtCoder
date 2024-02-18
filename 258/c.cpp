#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    int query, x, b = 0;
    while(q--) {
        cin >> query >> x;
        switch (query)
        {
        case 1:
            b = (b - x + n) % n;
            break;
        case 2:
            cout << s[(b+x-1+n)%n] << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}