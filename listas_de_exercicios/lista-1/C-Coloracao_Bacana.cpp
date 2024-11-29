#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
    fast_io
    int t, qLetras, tam, excesso, aux;
    string entrada;

    cin >> t;
    for (int i = 0; i < t; i++){
        qLetras = 1;
        excesso = 0;

        cin >> entrada;
        tam = entrada.length();
        sort(entrada.begin(), entrada.end());

        aux = 1;
        for (int i = 1; i < tam; i++){
            if (entrada[i] != entrada[i - 1]) {
                qLetras++;
                aux = 1;
            } else {
                aux++;
            }

            if (aux > 2) excesso++;
        }

        int ans = (tam - excesso) / 2;

        cout << ans << "\n";


    }
    return 0;
}