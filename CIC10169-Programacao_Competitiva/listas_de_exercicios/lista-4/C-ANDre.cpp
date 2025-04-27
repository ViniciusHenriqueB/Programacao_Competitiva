#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int posSignificativa(int num) {
    for (int i = 31; i >= 0; i--) {
        if ((num & (1 << i)) != 0) 
            return i;
    }
    return -1;
}

int main() {
    fast_io
    int t, n;

    cin >> t;
    while (t--) {
        cin >> n;
        cout << (1 << posSignificativa(n)) - 1 << "\n"; 
    }


    return 0;
}