#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, q, limite, l, r, velocidade, maxInfracoes, maxCompr, comprAtual;

    cin >> n >> q >> limite;
    vector<int> prefSum(n + 2, 0), delta(n + 2, 0);

    for (int i = 0; i < q; i++) {
        cin >> l >> r >> velocidade;
        if (velocidade > limite) {
            delta[l]++;
            delta[r + 1]--;
        }
    }

    maxInfracoes = 0;
    for (int i = 1; i <= n; i++) {
        prefSum[i] = prefSum[i - 1] + delta[i];
        if (prefSum[i] > maxInfracoes)
            maxInfracoes = prefSum[i];
    }

    if (maxInfracoes == 0)
        cout << "-1\n";
    else {
        maxCompr = 1;
        comprAtual = (prefSum[1] == maxInfracoes) ? 1 : 0;
        for (int i = 1; i <= n; i++) {
            if (prefSum[i + 1] == maxInfracoes)
                comprAtual++;
            else 
                comprAtual = 0;
            if (comprAtual > maxCompr)
                maxCompr = comprAtual;
        }
        cout << maxCompr << "\n";
    }


    return 0;
}