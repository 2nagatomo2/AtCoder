#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll B;
    cin >> B;
    
    for (int i=1; i<=15; i++) {
        ll A = 1;
        rep (j, i) A *= i;
        if (A == B) {
            cout << i << endl;
            exit(0);
        } 
    }
    
    cout << -1 << endl;
    return 0;
}