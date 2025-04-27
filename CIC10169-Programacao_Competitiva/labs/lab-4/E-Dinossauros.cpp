#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, l, r, ans;
    vector<int> delta(100002, 0), prefSum(100001, 0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        delta[l]++;
        delta[r + 1]--;
    }

    ans = 0;
    for (int i = 1; i <= 100000; i++) {
        prefSum[i] = prefSum[i - 1] + delta[i];
        if (prefSum[i] > ans)
            ans = prefSum[i];
    }

    cout << ans << "\n";

    return 0;
}