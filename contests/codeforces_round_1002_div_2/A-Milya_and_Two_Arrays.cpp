#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int t, n, aux, difA, difB;

    cin >> t;
    while (t--) {
        cin >> n;

        set<int> a, b;
        
        for (int i = 0; i < n; i++) {
            cin >> aux;
            a.insert(aux);
        }

        for (int i = 0; i < n; i++) {
            cin >> aux;
            b.insert(aux);
        }

        difA = a.size();
        difB = b.size();

        if ((difA == 1 && difB <= 2) || (difB == 1 && difA <= 2))
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}