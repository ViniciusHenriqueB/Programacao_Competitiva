#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

int main() {
    fast_io

    ll n, m, a, ans = 0;
    priority_queue<vector<ll>, vector<vector<ll>>, greater<vector<ll>>> minCaixas;
    vector<ll> v;
    queue<ll> fila;
    cin >> n >> m;

    for (ll i = 0; i < n; i++) {
        cin >> a;
        v = {0, i, a};
        minCaixas.push(v);
    }

    for (ll i = 0; i < m; i++) {
        cin >> a;
        fila.push(a);
    }

    vector<ll> aux;

    while (!fila.empty()) {   // O(Mlog(N))
        aux = minCaixas.top();
        aux[0] += aux[2] * fila.front();
        minCaixas.pop();
        minCaixas.push(aux);
        fila.pop();
    }

    // Agora preciso verificar o maior elemento da fila de prioridade restante

    while (!minCaixas.empty()) {  // O(Nlog(N))
        if (minCaixas.top()[0] > ans)
            ans = minCaixas.top()[0];
        minCaixas.pop();
    }

    cout << ans << "\n";
    return 0;
}

// O((M + N)log(N))
