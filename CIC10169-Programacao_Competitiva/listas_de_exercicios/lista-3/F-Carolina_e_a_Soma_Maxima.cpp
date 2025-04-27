#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long long ll;

int main() {
    fast_io
    int n, q, aux, l, r, sum;
    priority_queue<int> maiores;
    priority_queue<pair<int, int>> posMaisRep;

    vector<pair<int, int>> operacoes;
    pair<int, int> par;
    ll ans;
    
    cin >> n >> q;
    vector<ll> prefSum(n + 1, 0), delta(n + 2, 0), reordenado(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> aux;
        maiores.push(aux);  
    }

    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        par = make_pair(l, r);
        operacoes.pb(par);
        delta[l] += 1;
        delta[r + 1] -= 1; 
    }

    sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += delta[i];
        par = make_pair(sum, i);
        posMaisRep.push(par);
    }

    for (int i = 0; i < n; i++) {
        reordenado[posMaisRep.top().second] = maiores.top();
        posMaisRep.pop();
        maiores.pop();
    }

    for (int i = 1; i <= n; i++) {
        prefSum[i] = prefSum[i - 1] + reordenado[i];
    }

    ans = 0;
    for (pair<int, int> op : operacoes) {
        ans += prefSum[op.second] - prefSum[op.first - 1];
    }

    cout << ans << "\n";

    return 0;
}