#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define ii pair<ll, ll>
#define vvi vector<vector<ll>>
#define vs vector<string>
#define vi vector<ll>
#define vii vector<ii>
#define MOD 998244353
#define nl '\n'
using namespace std;
void solve() {
    ll n;
    cin >> n;
    vvi v(n, vi(2));
    for (auto &it : v) cin >> it[0] >> it[1];
    int b = 0, e = 1e6;
    while (b<e) {
        int md = b+(e-b)/2, ok = 1;
        int cst = md;
        for (auto it : v) {
            if (it[1] > cst) {
                ok = 0;
                break;
            }
            else cst-=it[0];
        }
        if (ok) e = md;
        else b = md+1;
    }
    cout << e << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    int t;
    cin >> t;
    for (; t--;) solve();
    return 0;
}