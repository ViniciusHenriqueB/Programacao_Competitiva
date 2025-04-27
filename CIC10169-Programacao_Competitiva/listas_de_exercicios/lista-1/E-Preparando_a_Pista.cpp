#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    long long t, n, a, resto, soma , ans;
    cin >> t;
    for (int i = 0; i < t; i++) {
        soma = 0;

        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a;
            soma += a;
        }

        resto = soma % n;
        ans = resto * (n - resto);
        cout << ans << "\n";

    }
    
    return 0;
}