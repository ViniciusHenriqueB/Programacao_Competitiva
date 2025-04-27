#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    int t, n, menor, s, comparacao;
    cin >> t;

    for (int i = 0; i < t; i++) {
        vector<int> forcas;
        menor = 999;

        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> s;
            forcas.push_back(s);
        }

        sort(forcas.begin(), forcas.end());

        for (int i = 1; i < n; i++) {
            comparacao = forcas[i] - forcas[i - 1];
            if (comparacao == 0){
                menor = 0;
                break;
            }
            if (comparacao < menor)
                menor = comparacao;
        }

        cout << menor << "\n";
        
    }
    
    return 0;
}