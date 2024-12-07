#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    int t, n, a, b, ans, alternancia, qOperacoes;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ans  = 0;
        cin >> n >> a >> b;
        cin >> s;
        if (b >= 0) 
            ans = n * (a + b);

        else {
            alternancia = 1;
            for (int i = 1; i < n; i++) {
                if (s[i] != s[i - 1])
                    alternancia += 1;
            }
            qOperacoes = alternancia / 2 + 1;
            ans = a*n + qOperacoes*b;
        }
        cout << ans << "\n";
    }
    
    return 0;
}