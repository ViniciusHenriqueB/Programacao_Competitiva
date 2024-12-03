#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    int n, p, ans, aux;
    vector<int> precos, v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        precos.push_back(p);
    }

    sort(precos.begin(), precos.end());

    ans = (precos.size()%2 == 0) ? precos.size()/2 -1 : precos.size()/2;
    cout << ans << "\n";


    aux = 0;
    for (size_t i = 0; i < precos.size(); i++) {
        if (i%2 == 0 or i == precos.size() - 1){
            cout << precos[ans];
            ans++;
        }
        else {
            cout << precos[aux];
            aux++;
            
        }
        if (i < precos.size() - 1) {
            cout << ' ';
        }

    }
    cout << "\n";


    return 0;
}