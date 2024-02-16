#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,s,n) for(int i=s; i<(n); i++)

int main() {
    int H1, W1;
    cin >> H1 >> W1;
    int A[H1][W1];
    rep(i, H1) rep(j, W1) cin >> A[i][j];
    
    int H2, W2;
    cin >> H2 >> W2;
    int B[H2][W2];
    rep(i, H2) rep(j, W2) cin >> B[i][j];
    
    vector<int> h, w;
    rep(i, H1-H2) h.push_back(0);
    rep(i, H2) h.push_back(1);
    rep(i, W1-W2) w.push_back(0);
    rep(i, W2) w.push_back(1);
    
    int cnt = 0;
    bool flag = false;
    do{
        do{
            int B_i = 0, B_j = 0;
            rep(A_i, H1) {
                B_j = 0;
                if(h[A_i] == 0) continue;
                rep(A_j, W1) {
                    if(w[A_j] == 0) continue;
                    if(A[A_i][A_j] == B[B_i][B_j]) {
                        cnt++;
                        B_j++;
                    }
                    else {
                        break;
                        flag = true;
                    }
                }
                if(flag) {
                    flag = false;
                    break;
                }
                B_i++;
            }
            if(cnt == H2 * W2) {
                cout << "Yes" << endl;
                return 0;
            } else {
                cnt = 0;
            }
        } while (next_permutation(w.begin(), w.end()));
    } while (next_permutation(h.begin(), h.end()));
    
    cout << "No" << endl;
    return 0;
}