#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int t, n, q, aux, posMin;
    ll c;
 
    cin >> t;
    while (t--) {
        cin >> n >> q;
        vector<int> a;
        vector<ll> pSum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> aux;
            a.pb(aux);
        }
 
        sort(a.begin(), a.end(), greater<int>());
        
        for (int i = 1; i <= n; i++) {
            pSum[i] = pSum[i - 1] + a[i - 1];
            // cout << pSum[i] << endl;
        }
 
        while (q--) {
            cin >> c;
            if (lower_bound(pSum.begin(), pSum.end(), c) == pSum.end())
                cout << "-1\n";
            else
                cout << lower_bound(pSum.begin(), pSum.end(), c) - pSum.begin() << "\n";
        }
 
    }
    
    return 0;
}