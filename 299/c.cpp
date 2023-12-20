#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    int cnt = 0;
    rep(i, n) {
        if(s[i] == 'o') {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }

    // 全てoの場合、全て-の場合は-1を出力
    if(ans == 0 || ans == n) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}