#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int t, n, ans, aux;
    cin >> t;

    while (t--) {
        cin >> n;
        cin >> ans;
        n--;

        while (n--) {
            cin >> aux;
            ans &= aux;
        }

        cout << ans << "\n";

    }

    return 0;
}