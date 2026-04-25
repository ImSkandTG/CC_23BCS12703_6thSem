#include <bits/stdc++.h>
#define u_int unsigned long long
#define int long long
#define ii pair<int, int>
#define vvi vector<vector<int>>
#define vs vector<string>
#define vi vector<int>
#define vii vector<ii>
#define nl '\n'
using namespace std;
const int md = 1e9+7;

int gcd(int a, int b, int& x, int& y) {
    if (b==0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int g = gcd(b, a%b, x1, y1);

    x = y1;
    y = x1 - (a/b)*y1;

    return g;
}

void solve() {
    int a = 30, b = 20;
    int x, y;
    int g = gcd(a, b, x, y);
    cout << x << " " << y << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    int t = 1;
    // cin >> t;
    for (; t--;) solve();
    return 0;
}