#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

vector<bool> IsPrime;

void sieve(size_t max){
if(max+1 > IsPrime.size()){     // resizeで要素数が減らないように
IsPrime.resize(max+1,true); // IsPrimeに必要な要素数を確保
} 
IsPrime[1] = false; // 1は素数ではない
IsPrime[0] = false; // 0は素数ではない

for(size_t i=2; i*i<=max; ++i) // 0からsqrt(max)まで調べる
if(IsPrime[i]) // iが素数ならば
for(size_t j=2; i*j<=max; ++j) // (max以下の)iの倍数は
IsPrime[i*j] = false;      // 素数ではない
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    sieve(200);
    int cnt = 0;
    REP(i, a, b+1) {
        REP(j, c, d+1) {
            if(IsPrime[i+j]) {
                cnt++;
                break;
            }
        }
    }
    if(cnt == b - a + 1) cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;
    return 0;
}