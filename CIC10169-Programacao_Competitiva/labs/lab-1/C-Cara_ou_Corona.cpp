#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int l, g, total;
    double pcara, pcorona;
 
    cin >> l >> g;
    total = l + g;
    pcara = l*100/total;
    pcorona = g*100/total;
 
    cout << fixed << setprecision(0);
    cout << pcara << " " << pcorona << "\n";
 
    
    return 0;
}