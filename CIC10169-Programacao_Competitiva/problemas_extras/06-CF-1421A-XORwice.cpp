#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

int main() {
    fast_io
    int t, a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        cout << (a^b) << "\n";
    }

    return 0;
}