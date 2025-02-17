#include <vector>
using namespace std;

// Obs.: Usar const antes de vector<int>& v é opcional neste caso

int buscaBinaria(vector<int>& v, int lenght, int query) {
    int first = 0;
    int last = lenght - 1;
    int mid;

    while (first <= last) {
        mid = (first + last) / 2;

        if (v[mid] == query) 
            return mid;
        
        else if (v[mid] < query)
            first = mid + 1;
        
        else 
            last = mid - 1;
    }
    return -1;
}