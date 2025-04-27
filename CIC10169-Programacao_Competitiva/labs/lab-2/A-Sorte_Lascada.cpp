#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
 
int main(){
 
    int t, somaP, somaU;
    string str;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> str;
        somaP = str[0] - '0' + str[1] - '0' + str[2] - '0';
        somaU = str[3] - '0' + str[4] - '0' + str[5] - '0';
 
        if (somaP == somaU)
            cout << "YES"<< "\n";
        else
            cout << "NO" << "\n";
 
    }
 
    return 0;
}