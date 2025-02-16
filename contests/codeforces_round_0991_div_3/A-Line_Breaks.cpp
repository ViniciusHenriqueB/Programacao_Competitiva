#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io
    int t, n, ans;
    size_t m, sum;
    string word;

    cin >> t;
    for (int i = 0; i < t; i++) {
        ans = 0;
        sum = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> word;
                if (sum + word.size() <= m) {
                    ans += 1;
                }
                sum += word.size();

        }
        cout << ans << "\n";

    }
    
    return 0;
}