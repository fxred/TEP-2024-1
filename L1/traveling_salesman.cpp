#include <bits/stdc++.h>
#include <cmath>

using namespace std;

struct Pair {
    int x;
    int y;
};

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int pairs_num;
        cin >> pairs_num;
        int distance = 0;
        int min_neg_x = 0, min_neg_y = 0, max_pos_x = 0, max_pos_y = 0;
        for (int j = 0; j < pairs_num; j++) {
            int x, y;
            cin >> x;
            cin >> y;
            if (x == 0) {
                if (y > 0) {
                    if (y > max_pos_y) {
                        max_pos_y = y;
                    }
                }
                else if (y < 0) {
                    if (y < min_neg_y) {
                        min_neg_y = y;
                    }
                }
                else { // y == 0
                    continue;
                }
            }
            if (y == 0) {
                if (x > 0) {
                    if (x > max_pos_x) {
                        max_pos_x = x;
                    }
                }
                else if (x < 0) {
                    if (x < min_neg_x) {
                        min_neg_x = x;
                    }
                }
                else { // x == 0
                    continue;
                }
            }
        }
        distance = max_pos_x + max_pos_y + abs(min_neg_x) + abs(min_neg_y);
        cout << distance*2 << endl;
    }
}