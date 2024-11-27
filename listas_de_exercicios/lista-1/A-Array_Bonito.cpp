#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
    fast_io
    int t, s;
    int soma, ans, ultimo_elem;

    cin >> t;
    for (int i = 0; i < t; i++) {
    cin >> s;

    soma = 1;
    ans = 1;
    ultimo_elem = 1;
    while (soma < s) {
        ultimo_elem += 2;
        if (soma + ultimo_elem > s){
            ans++;
            break;
        }
        soma += ultimo_elem;
        ans++;
    }

    cout << ans << "\n";
    }

}