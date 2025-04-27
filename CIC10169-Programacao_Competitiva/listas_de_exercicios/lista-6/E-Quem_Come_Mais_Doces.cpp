#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    ll n, l, r, mid, aristides, marcela, aux, ans, metade;
    cin >> n;

    l = 1;
    r = n;
    
    while (l <= r) {
        mid = (l + r) / 2;
        aux = n;
        metade = (n%2 == 0) ? n/2 : n/2 + 1;
        aristides = 0;
        marcela = 0;
        while (aux > 0) {
            if (aux - mid >= 0) {
                aristides += mid;
                aux -= mid;
            } 
            else {
                aristides += aux;
                aux = 0;
            }

            marcela += aux / 10;
            aux -= aux / 10;
            if (aristides >= metade)
                break;
        }

        if (aristides >= metade) {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << "\n";

    return 0;
}