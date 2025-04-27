#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
 
int main(){
 
    double n,r,m,p, unidadeR, unidadeP;
 
    cin >> n >> r >> m >> p;
 
    unidadeR = r / n;
    unidadeP = p / m;
 
    if (unidadeP < unidadeR)
        cout << "Promocao\n";
    else
        cout << "Enganacao\n";
 
 
    return 0;
}