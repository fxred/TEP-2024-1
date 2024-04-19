#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;
    int a = lcm(input, 360);
    int b = a/input;
    cout << b << endl;
}