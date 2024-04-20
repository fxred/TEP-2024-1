// 0,0 -> 3,2 = 7 caminhos diferentes (3*2 + 1)

// 0,0 -> 2,2 = 5 caminhos diferentes (2*2 + 1)

// 0,0 -> -3,0 = 1

// quantidade de caminhos diferentes = delta x * delta y + 1

// dá pra gerar 2 vectors que vão conter as coordenadas do caminho (não acho que seja a melhor solução, acho que dá pra fazer O(1)

// caso 1
// 3,0 = A
// 1,2 = B
// 6,3 = C

// 3,0 -> 1,2

// 2*2 + 1 = 5

// rotas possíveis do 3,0 pro 1,2:

// [3,0 -> 3,1 -> 3,2 -> 2,2 -> 1,2]
// [3,0 -> 3,1 -> 2,1 -> 2,2 -> 1,2]
// [3,0 -> 2,0 -> 2,1 -> 2,2 -> 1,2]
// [3,0 -> 2,0 -> 2,1 -> 1,1 -> 1,2]
// [3,0 -> 2,0 -> 1,0 -> 1,1 -> 1,2]

// rotas possíveis do 3,0 pro 6,3:

// [3,0 -> 3,1 -> 3,2 -> 3,3 -> 4,3 -> 5,3 -> 6,3]
// [3,0 -> 3,1 -> 3,2 -> 4,2 -> 4,3 -> 5,3 -> 6,3]
// ...

// tem que ver se o ponto A divide o ponto B do C verticalmente, isto é
// se B.x < A.x < C.x ou C.x < A.x < B.x. se isso ocorrer,
// contando apenas a abs da diferença entre o A.y e o min(B.y, C.y) + 1
// deve dar a resposta correta. se for outro caso, por exemplo
// A.x < B.x < C.x, A.x < C.x < B.x, B.x < C.x < A.x,
// C.x < B.x < A.x, tem que ver, vai ser uma soma de um X+Y


// vai ter que rolar uma análise do eixo X e eixo Y:



// SEGUNDA LÓGICA (melhor):

// verifica se A divide B e C no meio verticalmente, isto é, B.x < A.x < C.x ou C.x < A.x < B.x. se dividir, a resposta vai ser dada pelo deslocamento no eixo Y em min(abs(A.y - B.y), abs(A.y - C.y)) + 1

// A = 3,0
// B = 0,0
// C = 5,0

// verifica se A divide B e C no meio horizontalmente, isto é, B.y < A.y < C.y ou C.y < A.y < B.y. se dividir, a resposta vai ser dada pelo deslocamento no eixo X em min(abs(A.x - B.x), abs(A.x - C.x)) + 1

// A = 1,2
// B = 3,4
// C = 4,0

// se o B e C (não necessariamente nessa ordem) estiverem ambos pra um lado do A (pra cima, pra direita, pra baixo..):

// tira o min(abs(A.y - B.y), abs(A.y - C.y)) e o min(abs(A.x - B.x), abs(A.x - C.x)), soma os dois e adiciona 1. essa é a resposta

// A = 0,0
// B = 3,2
// C = 4,4

#include <bits/stdc++.h>

using namespace std;

struct Pair {
    int x;
    int y;
};

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        Pair A, B, C;
        cin >> A.x;
        cin >> A.y;
        cin >> B.x;
        cin >> B.y;
        cin >> C.x;
        cin >> C.y;
        if ((B.x < A.x && A.x < C.x) || (C.x < A.x && A.x < B.x)) {
            if ((B.y < A.y && A.y < C.y) || (C.y < A.y && A.y < B.y)) {
                cout << 1 << endl; // diagonalmente opostos, sempre vai ser 1
            }
            else {
                cout << min(abs(A.y - B.y), abs(A.y - C.y)) + 1 << endl;
            }
        }
        else if ((B.y < A.y && A.y < C.y) || (C.y < A.y && A.y < B.y)) {
            cout << min(abs(A.x - B.x), abs(A.x - C.x)) + 1 << endl;
        }
        else {
            int minY = min(abs(A.y - B.y), abs(A.y - C.y));
            int minX = min(abs(A.x - B.x), abs(A.x - C.x));
            int sum = minX + minY + 1;
            cout << sum << endl;
        }
    }
}