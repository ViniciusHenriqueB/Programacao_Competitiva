#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long long ll;

int main() {
    fast_io
    int n, q, l, r, x;
    cin >> n >> q;
    vector<ll> delta(n + 2, 0), prefSum(n + 1, 0); 
    for (int i = 0; i < q; i++) {
        cin >> l >> r >> x;
        delta[l] += x;
        delta[r + 1] -= x;
    }

    for (int i = 1; i <= n; i++) {
        prefSum[i] = prefSum[i - 1] + delta[i];
        cout << prefSum[i];
        if (i != n) cout << ' ';
        else cout << "\n";
    }


    return 0;
}