#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
 
int main(){
    float n, acertos, nota;
    char al, gab;
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> al >> gab;
        if (al == gab) ++acertos;
    }
 
    nota = 10 * acertos / n;
 
    cout << "Nota: ";
    cout << fixed;
    cout << setprecision(2);
    cout << nota << "\n";
 
 
    return 0;
}