#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    ll n, m, k, l, r, d, x, y, sumQOperacoes;
    
    cin >> n >> m >> k;

    vector<ll> arr(n + 1, 0), arrAux(3, 0);
    vector<ll> deltaAns(n + 2, 0), deltaOperacoes(m + 2, 0);
    vector<vector<ll>> operacoes;
    operacoes.pb({0, 0, 0});

    ll sumAns, ans;

    for (int i = 1; i <= n; i++) 
        cin >> arr[i];
    
    for (int i = 0; i < m; i++) {
        cin >> l >> r >> d;
        arrAux[0] = l;
        arrAux[1] = r;
        arrAux[2] = d;
        operacoes.pb(arrAux);
    }

    while (k--) {
        cin >> x >> y;
        deltaOperacoes[x]++;
        deltaOperacoes[y + 1]--;
    }

    sumQOperacoes = 0;

    for (int i = 1; i <= m; i++) {
        sumQOperacoes += deltaOperacoes[i];

        deltaAns[operacoes[i][0]] += sumQOperacoes * operacoes[i][2];
        deltaAns[operacoes[i][1] + 1] -= sumQOperacoes * operacoes[i][2];
    }

    sumAns = 0;
    for (int i = 1; i <= n; i++) {
        sumAns += deltaAns[i];
        ans = sumAns + arr[i];
        cout << ans << ' ';
    }

    cout << "\n";

    return 0;
}