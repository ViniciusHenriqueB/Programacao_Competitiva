#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io

    ll n, k, a, diferentes, l, r;

    cin >> n >> k;

    vector<int> cont(100001, 0), arr(n + 1, 0);
    // set<ll> auxPSum;

    diferentes = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (cont[a] == 0)
            diferentes++;
        cont[a]++;
        arr[i] = a;
    }

    // cout << diferentes << "\n";

    if (diferentes >= k) {
        for (int i = n; i >= 1; i--) {
            if (cont[arr[i]] == 1)
                diferentes--;
            
            cont[arr[i]]--;

            if (diferentes < k) {
                r = i;
                cont[arr[i]]++;
                diferentes++;
                break;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (cont[arr[i]] == 1) {
                l = i;
                break;
            }
            cont[arr[i]]--;
        }

        cout << l << ' ' << r << "\n";
    }
    else
        cout << "-1 -1\n";

    return 0;
}