#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int op(int x, int y) {
    return min(x, y);
}

int e() { return 1e9; }

int main() {
    int N, Q;
    cin >> N >> Q;
    int SIZE = 200000;
    vector<int> childsOfKindergarden(SIZE + 1, 0);
    vector<multiset<int>> score(SIZE + 1);
    segtree<int, op, e> seg(SIZE + 1);
    vector<int> A(N), B(N), C(Q), D(Q);
    rep(i, N) {
        cin >> A[i] >> B[i];
        childsOfKindergarden[B[i]]++;
        score[B[i]].insert(A[i]);
        seg.set(B[i], *score[B[i]].rbegin());
    }

    rep(i, Q) {
        cin >> C[i] >> D[i];
        C[i]--;
        // 転園する前の幼稚園の処理
        childsOfKindergarden[B[C[i]]]--;
        score[B[C[i]]].erase(score[B[C[i]]].find(A[C[i]]));
        if(childsOfKindergarden[B[C[i]]] == 0) {
            seg.set(B[C[i]], e());
        } else {
            seg.set(B[C[i]], *score[B[C[i]]].rbegin());
        }
        
        // 転園した幼稚園の処理
        B[C[i]] = D[i];
        childsOfKindergarden[D[i]]++;
        score[D[i]].insert(A[C[i]]);
        seg.set(D[i], *score[D[i]].rbegin());
        cout << seg.prod(1, SIZE) << endl;
    }
    return 0;
}