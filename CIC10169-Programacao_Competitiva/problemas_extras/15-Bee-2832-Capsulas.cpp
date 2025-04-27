#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, f, l, r, mid, aux, prodAtual, ans;
    cin >> n >> f;

    vector<int> capsulas;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        capsulas.pb(aux);
    }

    l = 1;
    r = 100000000;

    while (l <= r) {
        mid = (l + r) / 2;
        prodAtual = 0;
        for (int c : capsulas) {
            prodAtual += mid / c;
        }
        
        if (prodAtual >= f) {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << "\n";
    
    return 0;
}