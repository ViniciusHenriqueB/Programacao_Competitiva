#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Time limit exceeded on test 4

int main() {
    fast_io;
    int t, n, l, r, a, ans, maior, soma;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> l >> r;
        maior = 1;
        ans = 0;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            cin >> a; 
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        maior = v[n - 1];

        for (int i = 0; i < n; i++) {
            soma = v[i] + maior;
            if (soma < l) 
                continue;
            if (v[i] >= r)
                break;
            for (int j = i + 1; j < n; j++) {
                if (v[i] + v[j] > r) 
                    break;
                
                if (v[i] + v[j] >= l && v[i] + v[j] <= r) 
                    ans += 1;
            }
        }


        cout << ans << "\n";
    }
    
    return 0;
}