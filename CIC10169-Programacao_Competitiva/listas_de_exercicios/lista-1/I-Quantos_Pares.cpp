#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main() {
    fast_io;
    long long t, n, l, r, a, ans, min, max, atual, i_min, i_max;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> l >> r;

        vector<int> v;
        for (int i = 0; i < n; i++) {
            cin >> a; 
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        ans = 0;
 
        for (int i = 0; i < n; i++) {
            atual = v[i];
            if (atual > r) 
                break;
            min = l - atual;
            max = r - atual;
            if (max >= atual && min > atual) {
                i_min = lower_bound(v.begin(), v.end(), min) - v.begin();
                i_max = upper_bound(v.begin(), v.end(), max) - v.begin();
                ans += i_max - i_min;
            }
            else if (max >= atual && min <= atual) {
                min = atual;
                i_min = lower_bound(v.begin(), v.end(), min) - v.begin();
                if (i_min < i)
                    i_min = i;
                i_max = upper_bound(v.begin(), v.end(), max) - v.begin();
                ans += i_max - i_min - 1;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}