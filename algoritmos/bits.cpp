#include <bits/stdc++.h>
using namespace std;

// Para verificar se o i-ésimo bit de um número está ligado, basta vermos se o and (&) entre o número e (1 << bitPosition) é diferente de 0, caso contrário, o bit está desligado:
bool isSet(int bitPosition, int num) {
    return (num & (1 << bitPosition)) != 0;
}

// Para ligar o i-ésimo bit de um número, basta retornarmos o or (|) entre o número e (1 << bitPosition):
int setBit(int bitPosition, int num) {
    return num | (1 << bitPosition);
}

// Para desligar o i-ésimo bit de um número, basta retornarmos o and (&) entre o número e ~(1 << bitPosition):
int clearBit(int bitPosition, int num) {
    return num & ~(1 << bitPosition);
}

// Para isolarmos o primeiro bit ligado da direita pra esquerda (LSB), basta retornarmos o and (&) entre o número e o -número:
int LSB(int num) {
    return num & -num;
}

// Para pegarmos a posição do LSB, basta retornarmos o log2(num & -num):
int posLSB(int num) {
    return log2(num & -num);
}

int main() {       // i = 3210
    int n = 10;    //     1010

    // Verificando se um bit está ligado:

    if (isSet(1, n)) cout << "O bit na posicao 1 estah ligado\n";
    else cout << "O bit nesta posicao 1 nao estah ligado\n";

    if (isSet(0, n)) cout << "O bit na posicao 0 estah ligado\n";
    else cout << "O bit nesta posicao 0 nao estah ligado\n";


    // Ligando um bit:

    cout << setBit(0, n) << "\n";  //  1010 = 10 -> 1011 = 11
      
    cout << setBit(2, n) << "\n";  //  1010 = 10 -> 1110 = 14

    // Desligando um bit:

    cout << clearBit(1, n) << "\n";  //  1010 = 10 -> 1000 = 8

    cout << clearBit(3, n) << "\n";  //  1010 = 10 -> 0010 = 2

    // Isolando o LSB:
    cout << LSB(n) << "\n";  // 0010 = 2i

    // Conseguindo a posição do LSB:
    cout << posLSB(n) << "\n";   // 0010, o LSB está na posição 1 
    
    return 0;
}