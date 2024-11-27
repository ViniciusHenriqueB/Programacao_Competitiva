#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// resolução errada!!
using namespace std;

int main() {
    fast_io
    int t, rep, dif, ans, tam;
    string entrada;

    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> entrada;
        tam = entrada.length();
        rep = 0;

        sort(entrada.begin(), entrada.end());
        for (int i = 1; i < tam; i++){
            if (entrada[i] == entrada[i - 1]) 
                rep++;
        }
        dif = tam - rep;

        if (dif > tam/2) 
            ans = tam/2;
        else
            ans = dif;

        cout << ans << "\n";
    }
    return 0;
}