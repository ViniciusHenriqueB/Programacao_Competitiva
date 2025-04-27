#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, q, l, r, aux;
    
    cin >> n >> q;
    
    vector<ll> psum(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> aux;
        psum[i] = aux + psum[i - 1];
    }

    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        cout << psum[r] - psum[l - 1] << "\n";
    }

    return 0;
}