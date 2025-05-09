#include <bits/stdc++.h>
#define INF 1e8
#define int long long
using namespace std;

/**
.---------------------------------------------------.
| ██████╗ ██╗████████╗     ██████╗ ██╗   ██╗██████╗ |
|██╔════╝ ██║╚══██╔══╝    ██╔════╝ ██║   ██║██╔══██╗|
|██║  ███╗██║   ██║       ██║  ███╗██║   ██║██║  ██║|
|██║   ██║██║   ██║       ██║   ██║██║   ██║██║  ██║|
|╚██████╔╝██║   ██║       ╚██████╔╝╚██████╔╝██████╔╝|
| ╚═════╝ ╚═╝   ╚═╝        ╚═════╝  ╚═════╝ ╚═════╝ |
'---------------------------------------------------'
**/
int dpesito(int n, vector<int> &coins, vector<int> &dp) {
    if (n == 0) {
        return 0;
    }
    if (dp[n] != INF) {
        return dp[n];
    }
    dp[n] = 1e9;
    for (int i = 0; i < coins.size(); i++) {

        if (n - coins[i] >= 0) {

            dp[n] = min(dp[n], dpesito(n - coins[i], coins, dp) + 1);
        }
    }
    return dp[n];
}
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    vector<int> dp(x + 1, INF);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    int cont = dpesito(x, coins, dp);
    cout << (dp[x] == 1e9 ? -1 : dp[x]) << endl;
}
signed main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;

    // cin >> t;
    while (t--) {
        solve();
    }
}
