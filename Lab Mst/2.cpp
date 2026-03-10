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
    vs v(n);
    vector<bitset<26>>nums(n);
    for (auto &it : v) {
        cin >> it;
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<v[i].size();j++) {
            nums[i]|=(1<<(v[i][j]-'a'));
        }
    }
    int mx = INT_MIN;
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (nums[i]&nums[j]==0) {
                int nm = v[i].size() * v[j].size();
                mx = max(mx, nm);
            }
        }
    }
    cout << mx << endl;
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