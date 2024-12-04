#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, s;
    cin >> n >> s;
    int div = s / n;
    int resto = s % n;
    if (resto > 0) {
        div += 1;
    }
    cout << div;
}