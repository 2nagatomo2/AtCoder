#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    if(n % 100 >= 10) cout << n % 100 << endl;
    else cout << '0' << n % 10 << endl;
    return 0;
}