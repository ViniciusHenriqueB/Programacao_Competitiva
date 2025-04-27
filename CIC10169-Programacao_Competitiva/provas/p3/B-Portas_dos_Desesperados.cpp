#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
 
int main() {
    fast_io
    int n, maior, sum, aux;
    cin >> n;
    maior = 100;
    sum = 100;
    
    while (n--) {
        cin >> aux;
        sum += aux;
        if (sum > maior)
            maior = sum;
    }
 
    cout << maior << "\n";
 
    return 0;
}