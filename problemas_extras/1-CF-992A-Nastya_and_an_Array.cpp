#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
    fast_io
    int n, elem, min;
    bool possuiZero;
    vector<int> vetor;
    
    cin >> n;
    possuiZero = false;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (elem == 0) {
            possuiZero = true;
        }
        vetor.push_back(elem);
    }
    
    // Ordenar a lista
    sort(vetor.begin(), vetor.end());

    min = (possuiZero) ? 0 : 1;

    for (int i = 0; i < n - 1; i++) {
        // Se o da frente for diferente, adicione 1
        if (vetor[i] != vetor[i + 1]){
            min++;
        }
    }

    cout << min << "\n";
    return 0;
}