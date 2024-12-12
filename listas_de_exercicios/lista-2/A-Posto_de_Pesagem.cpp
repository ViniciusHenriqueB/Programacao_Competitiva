#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io;
    long long a, n, f, p, ans = 0, aux;
    queue<int> fila;
    cin >> n >> f >> p;
    for (int i = 0; i < n; i++) {
        cin >> a;
        fila.push(a);
    }
    aux = f;
    while (!fila.empty()) {
        if (aux == f) {
            if (fila.front() <= p) 
                ans += 5;
            
            else {
                ans += 10;
                fila.push(fila.front() - 2);
            }
            aux = 1;
        }
        else {
            ans++;
            aux++;
        }   
            
        fila.pop();
    }

    cout << ans << "\n";

    
    return 0;
}