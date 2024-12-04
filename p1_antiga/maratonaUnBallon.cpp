#include<bits/stdc++.h>
using namespace std;
 
bool taDentro(char a, vector<char> vec) {
    for (char carac : vec) {
        if (carac == a) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        int sum = 0;
        string s;
        vector<char> quest;
        cin >> n;
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (taDentro(s[j], quest)) {
                sum += 1;
            } else {
                sum += 2;
                quest.push_back(s[j]);
            }
        }
        cout << sum << "\n";
    }
    
}