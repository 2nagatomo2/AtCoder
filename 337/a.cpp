#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, a, b;
    cin >> n;
    int score_t = 0, score_a = 0;
    rep(i, n) {
        cin >> a >> b;
        score_t += a;
        score_a += b;
    }
    if(score_t > score_a) cout << "Takahashi" << endl;
    else if(score_t < score_a) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    return 0;
}