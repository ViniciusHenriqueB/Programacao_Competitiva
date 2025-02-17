#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, m, aux, q;
    
    cin >> n;
    vector<ll> pSum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> aux;
        pSum[i] = pSum[i - 1] + aux;
    }

    cin >> m;
    while (m--) {
        cin >> q;
        cout << lower_bound(pSum.begin(), pSum.end(), q) - pSum.begin() << "\n";
    }

    return 0;
}