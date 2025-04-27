#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int t, n, maiorPotDeDois;
    cin >> t;

    while (t--) {
        cin >> n;
        n--;
        maiorPotDeDois = 1 << (int)log2(n);
        for (int i = maiorPotDeDois - 1; i >= 0; i--)
            cout << i << ' ';
        for (int i = maiorPotDeDois; i <= n; i++)
            cout << i << ' ';
        
        cout << "\n";
    }

    return 0;
}