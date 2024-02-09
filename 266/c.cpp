#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int cross(int x1, int y1, int x2, int y2) {
    return x1 * y2 - y1 * x2;
}
int main() {
    pair<int, int> a, b, c, d;
    int x, y;
    cin >> x >> y;
    a = make_pair(x, y);
    cin >> x >> y;
    b = make_pair(x, y);
    cin >> x >> y;
    c = make_pair(x, y);
    cin >> x >> y;
    d = make_pair(x, y);
    if(cross(b.first-a.first, b.second-a.second, c.first-b.first, c.second-b.second) < 0) {
        cout << "No" << endl;
        return 0;
    }
    if(cross(c.first-b.first, c.second-b.second, d.first-c.first, d.second-c.second) < 0) {
        cout << "No" << endl;
        return 0;
    }
    if(cross(d.first-c.first, d.second-c.second, a.first-d.first, a.second-d.second) < 0) {
        cout << "No" << endl;
        return 0;
    }
    if(cross(a.first-d.first, a.second-d.second, b.first-a.first, b.second-a.second) < 0) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}