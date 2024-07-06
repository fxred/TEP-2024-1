#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string number1, number2;
    cin >> number1;
    cin >> number2;
    auto x = number1[0] - '0';
    int maxlength = max(number1.length(), number2.length());
    int stop = min(number1.length(), number2.length());
    bool isN1 = false;
    if (maxlength == number1.length() && maxlength != number2.length()) {
        isN1 = true;
    }
    maxlength = maxlength-1;
    bool isHard = false;
    for (int i = stop-1; i >= 0; i--) {
        if (isN1) {
            auto n1 = number1[maxlength--] - '0';
            auto n2 = number2[i] - '0';
            if (n1 + n2 > 9) {
                isHard = true;
                break;
            }
        }
        else {
            auto n1 = number1[i] - '0';
            auto n2 = number2[maxlength--] - '0';
            if (n1 + n2 > 9) {
                isHard = true;
                break;
            }
        }
        
    }
    if (isHard) {
        cout << "Hard";
    }
    else {
        cout << "Easy";
    }
}