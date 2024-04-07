#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int abc;
    cin >> abc;
    int a, b, c;
    c = abc % 10;
    abc /= 10;
    b = abc % 10;
    a = abc / 10;
    cout << 111 * (a + b + c) << endl;
    return 0;
}