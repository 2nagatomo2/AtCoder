#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, k, pass = 0;
    string s, t;
    cin >> n >> k >> s;

    rep(i, n) {
        if(pass < k) {
            if(s[i] == 'o') {
                t += 'o';
                pass++;
            }
            else t += 'x';
        }
        else t += 'x';
    }
    cout << t << endl;
    return 0;
}