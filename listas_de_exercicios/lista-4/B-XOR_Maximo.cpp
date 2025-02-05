#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

bool isSet(ll num, ll bitPos) {
    return (num & (1LL << bitPos)) != 0;
}

ll setBit(ll num, ll bitPos) {
    return num | (1LL << bitPos);
}

ll clearBit(ll num, ll bitPos) {
    return num & ~(1LL << bitPos);
}

int main() {
    fast_io
    ll num, b;
    bool flag = false;

    cin >> num;

    b = num;

    for (ll i = 63; i >= 0; i--) {
        if (isSet(num, i)) 
            flag = true;
        
        if (flag) {
            if (isSet(num, i))
                b = clearBit(b, i);
            else
                b = setBit(b, i);
        }
    }

    cout << num << ' ' << b << "\n";

    return 0;
}