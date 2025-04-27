#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
 
int main() {
    int a,b,c, menor_sorte, atual, menor = 1;
 
    cin >> a >> b >> c;
    menor_sorte = abs(1 - a) + pow(1 - b, 2) + abs(pow(1 - c, 3));
 
    for (int i = 1; i <= 99; i++) {
        atual = abs(i - a) + pow(i - b, 2) + abs(pow(i - c, 3));
        if (atual < menor_sorte) {
            menor_sorte = atual;
            menor = i;
        }
    }
 
    cout << menor << "\n";
 
    
    return 0;
}