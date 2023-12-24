#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    string w[n];
    rep(i, n) {
        cin >> w[i];
        if(w[i] == "and" || w[i] == "not" || w[i] == "that" || w[i] == "the" || w[i] == "you") {
            cout << "Yes";
            exit(0);
        }
    }
    cout << "No" << endl;;

    return 0;
}