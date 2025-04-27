#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main() {
    fast_io
    int t, n, a, b, ans;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ans = 0;
        vector<int> m, s;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a;
            m.push_back(a);
        }
        for (int i = 0; i < n; i++) {
            cin >> b;
            s.push_back(b);
        }
        int aux;

        for (int i = 0; i < n; i++) {
            if (i != n - 1) {
                aux = m[i] - s[i + 1];
                if (aux > 0) {
                    ans += aux;
                }
            }
            else 
                ans += m[i];
        }
        cout << ans << "\n";
    }

    

    return 0;
}