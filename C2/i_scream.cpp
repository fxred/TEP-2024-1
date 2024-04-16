#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int milk_solids, solids_not_fat, fat;
    cin >> solids_not_fat;
    cin >> fat;

    milk_solids = solids_not_fat + fat;

    if (milk_solids >= 15 && fat >= 8) {
        cout << 1 << endl;
    }
    else if (milk_solids >= 10 && fat >= 3) {
        cout << 2 << endl;
    }
    else if (milk_solids >= 3) {
        cout << 3 << endl; //ver pq nao pode && fat < 3 aqui
    }
    else if (milk_solids >= 0) {
        cout << 4 << endl; //ver pq nao pode && fat >= 0 aqui
    }
}