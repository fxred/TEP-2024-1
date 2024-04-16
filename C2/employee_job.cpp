#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, iterations;
    cin >> N;
    iterations = N;
    vector<int> vetorA;
    vector<int> vetorB;
    while (N--) {
        int timeA, timeB;
        cin >> timeA;
        cin >> timeB;
        vetorA.push_back(timeA);
        vetorB.push_back(timeB);
    }

    int minVetorA = *min_element(vetorA.begin(), vetorA.end());
    int minVetorB = *min_element(vetorB.begin(), vetorB.end());

    for (size_t i = 0; i < iterations; ++i) {
        cout << i << " ";
        cout << vetorA[i] << endl;
    }
    return 0;
}

// 3

// 1 5
// 5 2
// 3 4

// 2 2
// 4 3
// 4 4

// get min(vectorA)
// get min(vectorB)

// if (index(min(a)) == index(min(b))), get ai+bi and compare it to b(... i-1, i+1, i+2... excluding i) AND a(... i-1, i+1, i+2... excluding i)

// if ai+bi > b(min excluding i), ai + b(min excluding i) is a new candidate

// if ai+bi > a(min excluding i), bi + a(min excluding i) is another candidate

// finally, get the minimum of both candidates.=

