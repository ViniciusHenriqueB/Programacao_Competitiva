#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    int t;

    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, ai, bi, somaA, somaB;
        vector<int> a, b;
        somaA = 0;
        somaB = 0;
        
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ai;
            somaA += ai;
            a.push_back(ai);
        }
        for (int i = 0; i < n; i++) {
            cin >> bi;
            somaB += bi;
            b.push_back(bi);
        }

        if (somaA - somaB != 0) {
            cout << "-1" << "\n";
        }
            
        else {
            int qOp, dif;
            vector<int> is, js;

            for (int i = 0; i < n; i++) {
                dif = a[i] - b[i];
                // cout << dif << "\n";
                if (dif > 0) {
                    for (int j = 0; j < dif; j++)
                        is.push_back(i + 1);  
                } 
                else if (dif < 0) {
                    for (int j = 0; j < -dif; j++)
                        js.push_back(i + 1);  
                } 
            }
            qOp = is.size();
            cout << qOp << "\n";
            for (int i = 0; i < qOp; i++) {
                cout << is[i] << ' ' << js[i] << "\n";
            }
        }

        
    }
    
    return 0;
}