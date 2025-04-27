#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() {
    fast_io
    int x, maior, soma_indice;
    maior = 2;
    vector<int> v;
 
    for (int i = 0; i < 4; i++) {
        cin >> x;
        if (x > maior) {
            maior = x;
            soma_indice = i;
        }
 
        v.push_back(x);
    }
    for (int i = 0; i < 4; i++) {
        if (i != soma_indice) {
            cout << maior - v[i];
        }
        if (i != 3 && i != soma_indice) 
            cout << ' ';
    }
 
    cout << "\n";
    return 0;
}