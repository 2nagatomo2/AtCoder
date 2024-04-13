#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll a, b;
    cin >> a >> b;
    while (a > 0 && b > 0){
        if((a % 10) + (b % 10) > 9) {
            cout << "Hard" << endl;
            return 0;
        }
        a /= 10;
        b /= 10;
    }
    cout << "Easy" << endl;
    return 0;
}