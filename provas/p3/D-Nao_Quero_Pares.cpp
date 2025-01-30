#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int t, n, aux, ans;
    set<int, greater<int>> pares;
 
    cin >> t;
 
    while (t--) {
        cin >> n;
        ans = 0;
        while (n--) {
            cin >> aux;
            if (aux % 2 == 0) 
                pares.insert(aux);
        }
 
        while (!pares.empty()) {
            aux = *(pares.begin());
            pares.erase(aux);
            aux = aux / 2;
            ans++;
            if (aux % 2 == 0) {
                pares.insert(aux);
            }
        }
        cout << ans << "\n";
    }
    
 
    return 0;
}