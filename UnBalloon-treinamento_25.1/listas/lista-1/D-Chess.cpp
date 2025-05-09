#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
using pii = pair<int, int>;
using ll = long long;

int main() {
    fast_io
    int t, linhaA, colunaA, linhaD, colunaD;
    string p1, p2;
    
    cin >> t;
    while (t--) {
        queue<vector<int>> busca;
        vector<vector<bool>> visited (9, vector<bool>(9, false));
        cin >> p1 >> p2;
        linhaA = p1[0] - 96;
        colunaA = p1[1] - 48;
        linhaD = p2[0] - 96;
        colunaD = p2[1] - 48;

        vector<int> atual = {linhaA, colunaA, 0};
        visited[linhaA][colunaA] = true;

        busca.push(atual);

        while (true) {
            atual = busca.front();
            if (atual[0] == linhaD && atual[1] == colunaD) {
                cout << atual[2] << "\n";
                break;
            }

            if (atual[0] + 2 <= 8 && atual[1] + 1 <= 8 && !visited[atual[0] + 2][atual[1] + 1]) {
                busca.push({atual[0] + 2, atual[1] + 1, atual[2] + 1});
                visited[atual[0] + 2][atual[1] + 1] = true;
            }
            if (atual[0] + 2 <= 8 && atual[1] - 1 >= 1 && !visited[atual[0] + 2][atual[1] - 1]) {
                busca.push({atual[0] + 2, atual[1] - 1, atual[2] + 1});
                visited[atual[0] + 2][atual[1] - 1] = true;
            }

            if (atual[0] - 2 >= 1 && atual[1] + 1 <= 8 && !visited[atual[0] - 2][atual[1] + 1]) {
                busca.push({atual[0] - 2, atual[1] + 1, atual[2] + 1});
                visited[atual[0] - 2][atual[1] + 1] = true;
            }

            if (atual[0] - 2 >= 1 && atual[1] - 1 >= 1 && !visited[atual[0] - 2][atual[1] - 1]) {
                busca.push({atual[0] - 2, atual[1] - 1, atual[2] + 1});
                visited[atual[0] - 2][atual[1] - 1] = true;
            }

            if (atual[0] + 1 <= 8 && atual[1] + 2 <= 8 && !visited[atual[0] + 1][atual[1] + 2]) {
                busca.push({atual[0] + 1, atual[1] + 2, atual[2] + 1});
                visited[atual[0] + 1][atual[1] + 2] = true;
            }

            if (atual[0] - 1 >= 1 && atual[1] + 2 <= 8 && !visited[atual[0] - 1][atual[1] + 2]) {
                busca.push({atual[0] - 1, atual[1] + 2, atual[2] + 1});
                visited[atual[0] - 1][atual[1] + 2] = true;
            }

            if (atual[0] + 1 <= 8 && atual[1] - 2 >= 1 && !visited[atual[0] + 1][atual[1] - 2]) {
                busca.push({atual[0] + 1, atual[1] - 2, atual[2] + 1});
                visited[atual[0] + 1][atual[1] - 2] = true;
            }

            if (atual[0] - 1 >= 1 && atual[1] - 2 >= 1 && !visited[atual[0] - 1][atual[1] - 2]) {
                busca.push({atual[0] - 1, atual[1] - 2, atual[2] + 1});
                visited[atual[0] - 1][atual[1] - 2] = true;
            }

            busca.pop();
        }


    }

    return 0;
}