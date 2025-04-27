#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n, k, aux, posLider, op, posEliminado;
    vector<int> criancas, ans;
    queue<int> operacoes;
    vector<int>::iterator it;
    cin >> n >> k;
 
    for (int i = 1; i <= n; i++) {
        criancas.pb(i);
    }
 
    while (k--) {
        cin >> aux;
        operacoes.push(aux);
    }
 
    posLider = 0;
    
    while (!operacoes.empty()) {
        op = operacoes.front();
        if (posLider + op >= n) 
            posEliminado = (posLider + op)%n;
        else
            posEliminado = posLider + op;
 
        if (posEliminado == n - 1) 
            posLider = 0;
        else 
            posLider = posEliminado;
        
        ans.pb(criancas[posEliminado]);
        it = criancas.begin() + posEliminado;
        criancas.erase(it);
 
        operacoes.pop(); 
        n--;
    }
 
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i != ans.size() - 1)
            cout << ' ';
    }
 
    cout << "\n";
 
    return 0;
}