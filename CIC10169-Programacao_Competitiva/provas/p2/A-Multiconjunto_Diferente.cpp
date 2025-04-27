#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int t, n, aux, qPares, qImpares;
    cin >> t;
    while (t--) {
        cin >> n;
        qPares = 0;
        qImpares = 0;
        for (int i = 0; i < 2 * n; i++) {
            cin >> aux;
            if (aux%2 == 0)
                qPares++;
            else    
                qImpares++;
        }
        if (qPares == qImpares)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    
    return 0;
}