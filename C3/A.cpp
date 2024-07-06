#include <bits/stdc++.h>

using namespace std;

int main() {
    string firstLine, secondLine;
    cin >> firstLine;
    cin >> secondLine;
    if (firstLine[0] == '.' && secondLine[1] == '.') {
        cout << "No";
    }
    else if (firstLine[1] == '.' && secondLine[0] == '.') {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
}