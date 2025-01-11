#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, q, aux, l, r, vacinas;
    ll ans;

    cin >> n >> q;
    vector<ll> gripadas(n + 1, 0), operacoes(n + 1, 0), deltaOp(n + 2, 0), distribuicao(n + 1, 0), deltaDistr(n + 2, 0);

    for (int i = 1; i <= n; i++) {
        cin >> aux;
        gripadas[i] = aux;
    }

    for (int i = 0; i < q; i++) {
        cin >> l >> r >> vacinas;

        deltaOp[l]++;
        deltaOp[r + 1]--;

        deltaDistr[l] += vacinas;
        deltaDistr[r + 1] -= vacinas;
    }

    ans = 0;
    for (int i = 1; i <= n; i++) {
        operacoes[i] = operacoes[i - 1] + deltaOp[i];
        distribuicao[i] = distribuicao[i - 1] + deltaDistr[i];

        if (gripadas[i] - distribuicao[i] > 0)
            ans += operacoes[i];
    }

    cout << ans << "\n";

    return 0;
}