#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long long ll;

int main() {
    int n, q, aux, l, r;
    cin >> n >> q;
    vector<ll> v(n + 1, 0), prefSum(n + 1, 0); 
    ll ans;

    for (int i = 1; i <= n; i++) {
        cin >> aux;
        v[i] = aux;
        prefSum[i] = prefSum[i - 1] + aux;
    }
    
    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        ans = prefSum[r] - prefSum[l - 1];
        cout << ans << "\n";
    }

    return 0;
}