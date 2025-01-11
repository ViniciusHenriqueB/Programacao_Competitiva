#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int q, t, m;
    set<int> estoque;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        cin >> t >> m;
        if (t == 1) 
            estoque.insert(m);
        else{
            if (estoque.count(m))
                cout << "Sim\n";
            else    
                cout << "Nao\n";
        }
    }

    return 0;
}