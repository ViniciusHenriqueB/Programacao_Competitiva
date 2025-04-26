#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int m, sum, aux, falta, elevado;
    vector<int> a;

    cin >> m;

    sum = 0;
    while (sum < m) {
        aux = 1;
        elevado = 0;
        falta = m - sum;
        while (aux < falta) {
            if (aux * 3 > falta) break;
            aux *= 3;
            elevado++;
        }
        // cout << aux << "\n";
        a.pb(elevado);
        sum += aux;
    }

    cout << a.size() << "\n";
    for (int elem : a)
        cout << elem << ' ';
    

    return 0;
}