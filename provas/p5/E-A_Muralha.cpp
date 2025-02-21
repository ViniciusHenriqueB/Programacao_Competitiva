#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    ll n, k, l, r, ans = 0, aux, mid;
    cin >> n >> k;
 
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) cin >> arr[i];
 
    l = 1;
    r = 1000000000;
 
    while (l <= r) {
        aux = 0;
        mid = (l + r) / 2;
 
        for (ll num : arr) {
            aux += num / mid;
        }
 
        if (aux >= k) {
            l = mid + 1;
            ans = mid;
        }
        else r = mid - 1;
 
    }
 
    cout << ans << "\n";
    return 0;
}