#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main() {
    fast_io
    int t, n, a, b, c, ans, sum, max, total;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> a >> b >> c;
        ans = 0;
        total = 0;
        sum = a + b + c;
        if (sum <= n) {
            max = n / sum;
            ans += 3 * max;
            total += sum * max;
        }

        if (total < n) {
            ans += 1;
            total += a;
        }
            
        if (total < n) {
            ans += 1;
            total += b;
        }
            
        if (total < n) {
            ans += 1;
            total += c;
        }
            
        
        cout << ans << "\n"; 
    }


    return 0;
}