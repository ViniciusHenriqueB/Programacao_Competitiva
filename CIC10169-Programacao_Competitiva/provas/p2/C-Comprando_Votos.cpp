#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int n, aux, ans = 0, vSananduva;
    priority_queue<int> maiores;
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        if (i == 0) vSananduva = aux;
        else {
            if (aux >= vSananduva)
                maiores.push(aux);
        }
    }
 
    while (!maiores.empty() && maiores.top() >= vSananduva) {
        aux = maiores.top();
        vSananduva++;
        aux--;
        maiores.pop();
        maiores.push(aux);
        ans++;
    }
 
    cout << ans << "\n";
    return 0;
}