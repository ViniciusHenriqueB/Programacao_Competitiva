#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int t, n;
    ll h, l, r, mid, aux, ans;

    cin >> t;
    while (t--) {
        cin >> n >> h;
        l = 1;
        r = h;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        while (l <= r) {
            aux = 0;
            mid = (l + r) / 2;

            for (int i = 0; i < n - 1; i++) {
                if (arr[i + 1] - arr[i] <= mid)
                    aux += arr[i + 1] - arr[i];
                else
                    aux += mid;
            }
            aux += mid;

            if (aux >= h) {
                r = mid - 1;
                ans = mid;
            }
            else
                l = mid + 1;
        }
        cout << ans << "\n";
    }

    return 0;
}