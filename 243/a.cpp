#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int v, a, b, c;
    cin >> v >> a >> b >> c;
    
    while(v >= 0) {
        v -= a;
        if(v < 0) {
            cout << 'F' << endl;
            return 0;
        }
        v -= b;
        if(v < 0) {
            cout << 'M' << endl;
            return 0;
        }
        v -= c;
        if(v < 0) {
            cout << 'T' << endl;
            return 0;
        }
    }
    return 0;
}