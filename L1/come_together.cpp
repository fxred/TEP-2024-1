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