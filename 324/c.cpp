#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll N;
    string T;
    cin >> N >> T;

    ll cnt = 0;
    vector <int> ans;

    rep(i,N) {
        string S;
        cin >> S;
        if (S == T) {
            ans.push_back(i+1);
            cnt++;
        }
        else if (T.length() == S.length()+1) {
            if (T.substr(0, S.length()) == S) {
                ans.push_back(i+1);
                cnt++;
            } else {
                rep(j, S.length()) {
                    if (T[j] != S[j]) {
                        if (T.substr(j+1) == S.substr(j)) {
                            ans.push_back(i+1);
                            cnt++;
                        }
                        break;
                    }
                }
            }
        }
        else if (T.length() == S.length()-1) {
            if (T == S.substr(0, T.length())) {
                ans.push_back(i+1);
                cnt++;
            } else {
                rep(j, T.length()) {
                    if (T[j] != S[j]) {
                        if (T.substr(j) == S.substr(j+1)) {
                            ans.push_back(i+1);
                            cnt++;
                        }
                        break;
                    }
                }
            }
        }
        else if (T.length() == S.length()) {
            rep(j, T.length()) {
                if (T[j] != S[j]) {
                    if (T.substr(j+1) == S.substr(j+1)) {
                        ans.push_back(i+1);
                        cnt++;
                    }
                    break;
                }
            }
        }
    }
    cout << cnt << endl;
    rep(k, ans.size()) {
        cout << ans[k] << ' ';
    }
    return 0;
}