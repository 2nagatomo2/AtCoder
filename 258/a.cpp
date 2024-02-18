#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int k;
    cin >> k;
    int hh = 21;
    if(k >= 60) {
        hh++;
        k -= 60;
    }
    if(k < 10) {
        cout << hh << ":0" << k << endl;
    } else {
        cout << hh << ':' << k << endl;
    }
    return 0;
}