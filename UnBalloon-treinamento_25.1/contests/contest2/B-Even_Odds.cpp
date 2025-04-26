#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    ll n, k, ans;
    cin >> n >> k;
    if (n%2 == 0) {
        if (k > (n/2)) ans = 2 + (k - n/2 - 1) * 2;
        else ans = 1 + (k - 1) * 2;
    }
    else {
        if (k > (n + 1)/2) ans = 2 + (k - (n + 1)/2 - 1) * 2;
        else ans = 1 + (k - 1) * 2;
    }

    cout << ans << "\n";
    
    return 0;
}