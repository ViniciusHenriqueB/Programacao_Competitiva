#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, m, l = 1, r = 1000000000, mid, aux, ans = 0;

    cin >> n >> m;
    vector<int> caixas(n);

    for (int i = 0; i < n; i++)
        cin >> caixas[i];

    while (l <= r) {
        mid = (l + r) / 2;
        aux = 0;
        for (int c : caixas) 
            aux += c / mid;
        
        if (aux >= m) {
            l = mid + 1;
            ans = mid;
        }
        
        else
            r = mid - 1;
    }

    cout << ans << "\n";

    return 0;
}