#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    ll n, s, k, mid, t, l, r;
    ll sum;
    
    cin >> n >> s;
    
    vector<ll> preco_base(n, 0);
    for (int i = 0; i < n; i++) 
        cin >> preco_base[i];
    
    l = 1;
    r = n;
    k = 0;
    t = 0;

    while (l <= r) {
        mid = (l + r) / 2;   // Chute para o valor de k

        vector<ll> preco(n, 0);
        for (int i = 0; i < n; i++) {  // Armazenando todos os novos custos para comprar mid itens
            preco[i] = preco_base[i] + (i + 1) * mid; 
        }

        sort(preco.begin(), preco.end());  // Ordenar os preços atuais para minimizar a o preço dos mid itens comprados

        sum = 0;
        for (int i = 0; i < mid; i++)  // obtendo o preço mínimo dos mid itens comprados
            sum += preco[i];
        

        if (sum <= s) {
            l = mid + 1;
            k = mid;
            t = sum;
        }
        else
            r = mid - 1;

    }

    cout << k << ' ' << t << "\n";


    

    return 0;
}