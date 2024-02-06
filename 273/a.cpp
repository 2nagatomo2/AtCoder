#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int f(int x) {
    if(x == 0) return 1;
    else return x * f(x - 1);
}

int main() {
    int N;
    cin >> N;
    cout << f(N) << endl;
    return 0;
}