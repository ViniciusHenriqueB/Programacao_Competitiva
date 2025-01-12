#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long long ll;

int main() {
    fast_io
    int n, m, c, aux, qEtapas, sum = 0;
    cin >> n >> m >> c;
    vector<int> a(n + 1, 0), delta(n + 2, 0);
    
    qEtapas = n - m + 1;
    for (int i = 1; i <= n; i++) {
        cin >> aux;
        a[i] = aux;
    }

    for (int i = 1; i <= m; i++) {
        cin >> aux;
        delta[i] += aux;
        delta[i + qEtapas] -= aux;
    }

    for (int i = 1; i <= n; i++) {
        sum += delta[i];
        aux = (a[i] + sum) % c;
        cout << aux;
        if (i != n) cout << ' ';
        else cout << "\n";
    }

    return 0;
}