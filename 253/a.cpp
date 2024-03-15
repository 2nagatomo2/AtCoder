#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if((a <= b && b <= c) || (a >= b && b >= c)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}