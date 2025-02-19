#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, m, l, r;
    cin >> n >> m;
    vector<int> precos(n);
    pair<int, int> ans = {0, 1000000};

    for (int i = 0; i < n; i++) 
        cin >> precos[i];
    
    sort(precos.begin(), precos.end());

    l = 0;
    r = n - 1;

    while (l < r) {
        if (precos[l] + precos[r] == m && precos[r] - precos[l] < ans.ss - ans.ff) {
            ans.ff = precos[l];
            ans.ss = precos[r];
            l++;
        } 
        else if (precos[l] + precos[r] > m)
            r--;
        else    
            l++;
    }

    cout << ans.ff << ' ' << ans.ss << "\n";

    return 0;
}