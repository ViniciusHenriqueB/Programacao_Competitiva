#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, m, aux;
    cin >> n >> m;

    vector<int> cubos(n);

    for (int i = 0; i < n; i++) {
        cin >> cubos[i];
    }

    sort(cubos.begin(), cubos.end());

    for (int i = 0; i < m; i++) {
        cin >> aux;
        if (*lower_bound(cubos.begin(), cubos.end(), aux) == aux)
            cout << lower_bound(cubos.begin(), cubos.end(), aux) - cubos.begin() + 1 << ' ';
        else
            cout << "-1 ";
    }

    return 0;
}