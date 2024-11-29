#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool ehPossivel(vector<int>& vetor) {
    sort(vetor.begin(), vetor.end());
    for (size_t i = 1; i < vetor.size(); i++) {
        if (vetor[i] - vetor[i - 1] > 1)
            return false;
    }
    return true;

}


int main() {
    int t, n, a;
    cin >> t;

    for (int i = 0; i < t; i++) {
        vector<int> vetor;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a;
            vetor.push_back(a);
        }

        if (ehPossivel(vetor)) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}