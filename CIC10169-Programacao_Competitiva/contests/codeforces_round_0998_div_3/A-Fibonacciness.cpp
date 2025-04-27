#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int t, aux, a1, a2, a4, a5, maisRep;
    cin >> t;
    while (t--) {
        vector<int> possiveisValores;

        cin >> a1 >> a2 >> a4 >> a5;

        possiveisValores.pb(a1 + a2);
        possiveisValores.pb(a4 - a2);
        possiveisValores.pb(a5 - a4);

        sort(possiveisValores.begin(), possiveisValores.end());

        maisRep = 1;
        aux = 1;
        for (int i = 1; i <= 2; i++) {
            if (possiveisValores[i] == possiveisValores[i - 1]) 
                aux++;
            else 
                aux = 1;
            
            if (aux > maisRep)
                maisRep = aux;
        }

        cout << maisRep << "\n";
    }

    return 0;
}