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
        int coordinates;
        cin >> coordinates;
        vector<Pair> coords;
        for (int j = 0; j < coordinates; j++) {
            Pair xy;
            cin >> xy.x;
            cin >> xy.y;
            coords.push_back(xy);
        }
        Pair candidate;
        candidate.x = 0, candidate.y = 0;
        int min_dist = abs((candidate.x - coords[0].x) + (candidate.y - coords[0].y));
        int dist_to_be_traveled = 0;
        for (int m = 0; m < coordinates; m++) {
            for (int l = 1; l < coordinates; l++) {
                int diffX = candidate.x - coords[l].x;
                int diffY = candidate.y - coords[l].y;
                if (abs(diffX + diffY) < min_dist) {
                    min_dist = abs(diffX + diffY);
                    dist_to_be_traveled += min_dist;
                    coords.erase(l);
                }
            }
        }
        
    }
}