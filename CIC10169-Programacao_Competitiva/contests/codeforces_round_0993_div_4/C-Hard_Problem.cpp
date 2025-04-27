#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io;
    int t, m, a, b, c, r1, r2, restante, ans;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> m >> a >> b >> c;
        ans = 0;
        r1 = m;
        r2 = m;
        if (a > r1){
            ans += r1;
            r1 = 0;
        }
        else {
            ans += a;
            r1 -= a;
        }

        if (b > r2){
            ans += r2;
            r2 = 0;
        }
        else {
            ans += b;
            r2 -= b;
        }

        restante = r1 + r2;

        if (c > restante) {
            ans += restante;
        }
        else {
            ans += c;
        }

        cout << ans << "\n";
    }
    return 0;
}