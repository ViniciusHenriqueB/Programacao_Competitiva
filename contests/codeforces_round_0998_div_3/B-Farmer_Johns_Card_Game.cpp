#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int t, n, m, aux;
    bool ehPossivel;

    cin >> t;
    while (t--) {
        ehPossivel = true;
        vector<pair<vector<int>, int>> vacas;

        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            pair<vector<int>, int> vaca;
            for (int j = 0; j < m; j++) {
                cin >> aux;
                vaca.ff.pb(aux);
            }
            
            sort(vaca.ff.begin(), vaca.ff.end());

            for (int j = 1; j < m; j++) {
                if (vaca.ff[j] != vaca.ff[j - 1] + n) 
                    ehPossivel = false;
            }
            vaca.ss = i + 1;
           
            vacas.pb(vaca);
        }

        if (ehPossivel) {
            sort(vacas.begin(), vacas.end());
            for (int i = 0; i < n; i++) {
                cout << vacas[i].ss;
                if (i != n - 1)
                    cout << ' ';
            }
        }
        else
            cout << "-1";
        
        cout << "\n";

    }

    return 0;
}