#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, aux;
    map<int, int> errosZerados, erros1, erros2, erros3;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        errosZerados[aux] = 0;
        if (erros1.count(aux))
            erros1[aux]++;
        else
            erros1[aux] = 1;
    } 

    erros2 = errosZerados;
    erros3 = errosZerados;

    for (int i = 0; i < n - 1; i++) {
        cin >> aux;
        erros2[aux]++;
    } 

    for (int i = 0; i < n - 2; i++) {
        cin >> aux;
        erros3[aux]++;
    } 

    // Comparação entre erros1 e erros2:
    for (auto &par : erros2) {
        if (erros1[par.ff] > par.ss) {
            cout << par.ff << "\n";
            break;
        }
    }

    // Comparação entre erros2 e erros3:
    for (auto &par : erros3) {
        if (erros2[par.ff] > par.ss) {
            cout << par.ff << "\n";
            break;
        }
    }
    
    return 0;
}