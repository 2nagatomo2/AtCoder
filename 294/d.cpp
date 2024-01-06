#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    queue<int> que;
    int next = 1, event, x;
    vector<bool> check(n+1, false);
    rep(i, q) {
        cin >> event;
        switch (event){
            case 1:
                que.push(next);
                next++;
                break;
            case 2:
                cin >> x;
                check[x] = true;
                break;
            case 3:
                bool flag = true;
                while(flag) {
                    if(check[que.front()]) {
                        que.pop();
                    } else {
                        cout << que.front() << endl;
                        flag = false;
                    }
                }
                break;
        }
    }
    return 0;
}