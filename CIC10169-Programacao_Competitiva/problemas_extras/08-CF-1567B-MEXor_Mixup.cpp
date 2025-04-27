#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int t, a, b, ans;
    vector<int> xorr(300001);
    for (int i = 1; i <= 300000; i++) {
        xorr[i] = xorr[i - 1] ^ i;
    }
    cin >> t;

    while (t--) {
        cin >> a >> b;

        ans = a;

        if (xorr[ans - 1] != b){    
            if ((xorr[ans - 1] ^ b) == a)
                ans += 2;
            else 
                ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}