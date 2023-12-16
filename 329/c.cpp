#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    int words[26];
    rep(i, 26) words[i] = 0;
    int now = 1;
    words[int(s[0])-int('a')] = 1;
    for(int i=1; i<n; i++) {
        if(s[i] == s[i-1]) {
            now++;
        } else {
            now = 1;
        }
        words[int(s[i])-int('a')] = max(words[int(s[i])-int('a')], now);
    }

    int ans = 0;
    rep(i, 26) {
        ans += words[i];
    }
    cout << ans << endl;
    return 0;
}