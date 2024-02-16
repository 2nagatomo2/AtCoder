#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int Q, query, k, x;
    vector<int> A;
    cin >> Q;
    while(Q--) {
        cin >> query;
        switch (query)
        {
        case 1:
            cin >> x;
            A.push_back(x);
            break;
        case 2:
            cin >> k;
            cout << A[A.size() - k] << endl;
        default:
            break;
        }
    }
    return 0;
}