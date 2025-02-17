#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, aux, ans, tamArcos;
    cin >> n;
    vector<int> pSumArcos(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> aux;
        pSumArcos[i] = pSumArcos[i - 1] + aux;
    }

    ans = 0;
    
    vector<bool> existe(pSumArcos[n] + 1, false);
    for (int i = 1; i <= n; i++) {
        existe[pSumArcos[i]] = true;
    }
    if (pSumArcos[n]%3 == 0) {
        tamArcos = pSumArcos[n] / 3;
        // cout << pSumArcos[n] << "\n";   
        // cout << tamArcos << "\n";
        for (int i = 1; i <= n; i++) {
            if (pSumArcos[i] + 2*tamArcos <= pSumArcos[n]) {
                if (existe[pSumArcos[i] + tamArcos])
                    if (existe[pSumArcos[i] + 2*tamArcos])
                        ans++;
            }
        }
    }

    cout << ans << "\n";


    return 0;
}