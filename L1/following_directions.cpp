#include <iostream>
#include <string>

using namespace std;

int main() {
    int iter;
    cin >> iter;

    for (int i = 0; i < iter; i++) {
        string returnValue = "NO";
        int stringlength, x = 0, y = 0;
        cin >> stringlength;
        string str;
        cin >> str;
        for (int j = 0; j < stringlength; j++) {
            if (str[j] == 'U') {
                y++;
            }
            else if (str[j] == 'D') {
                y--;
            }
            else if (str[j] == 'R') {
                x++;
            }
            else if (str[j] == 'L') {
                x--;
            }
            if (x == 1 && y == 1) {
                returnValue = "YES";
                break;
            }
        }
        cout << returnValue << endl;
    }
}