#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int a[n+1];
    rep(i, n+1) a[i] = 0;
    int candidate;
    int vote;
    cin >> vote;
    a[vote]++;
    candidate = vote;
    cout << candidate << endl;

    rep(i, m-1) {
        cin >> vote;
        a[vote]++;
        if(a[candidate] < a[vote]) {
            candidate = vote;
        } else if(a[candidate] == a[vote]) {
            if(candidate > vote) {
                candidate = vote;
            }
        }
        cout << candidate << endl;
    }
    return 0;
}