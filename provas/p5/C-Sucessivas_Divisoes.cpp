#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    ll n, q, ans;
    bool flag;
 
    cin >> q;
    while (q--) {
        cin >> n;
        ans = 0;
        flag = true;
        while (n != 1) {
            if (n%2 == 0) {
                n /= 2;
                ans++;
            }
            else if (n%3 == 0) {
                n = 2 * n / 3;
                ans++;
            } 
            else if (n%5 == 0) {
                n = 4 * n / 5;
                ans++;
            }
            else {
                cout << "-1\n";
                flag = false;
                break;
            }
 
        }
        if (flag) cout << ans << "\n";
    }
 
    return 0;
}