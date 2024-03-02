#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    rep(i, 10) {
        if(i != a + b) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}