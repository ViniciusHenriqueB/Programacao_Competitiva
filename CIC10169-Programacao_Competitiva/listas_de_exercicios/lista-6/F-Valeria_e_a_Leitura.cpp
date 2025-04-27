#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, t, l, r, mid, ans, aux;
    bool flag;

    cin >> n >> t;
    vector<ll> pSum(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> aux;
        pSum[i] = pSum[i - 1] + aux;
    }

    l = 1;
    r = n;

    while (l <= r) {
        mid = (l + r) / 2;
        flag = false;

        for (int i = 1; i <= n - mid + 1; i++) {
            if (pSum[i + mid - 1] - pSum[i - 1] <= t) {
                flag = true;
                break;
            }
        }
        
        if (flag) {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
    }

    cout << ans << "\n";

    return 0;
}