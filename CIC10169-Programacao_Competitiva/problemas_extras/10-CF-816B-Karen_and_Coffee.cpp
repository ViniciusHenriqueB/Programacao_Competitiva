#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n, k, q, l, r, a, b, sum;
    vector<int> delta_temp(200002, 0), psum_ans(200001, 0);

    cin >> n >> k >> q;

    while (n--) {
        cin >> l >> r;
        delta_temp[l]++;
        delta_temp[r + 1]--;
    }

    sum = 0;

    for (int i = 1; i <= 200000; i++) {
        sum += delta_temp[i];
        psum_ans[i] = psum_ans[i - 1];
        if (sum >= k)
            psum_ans[i]++;
        
        // if (i >= 91 && i <= 99)
        //     cout << psum_ans[i] << " ";
    }

    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << psum_ans[b] - psum_ans[a - 1] << "\n";
    }



    return 0;
}