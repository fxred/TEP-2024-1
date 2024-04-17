#include <bits/stdc++.h>
#include <cmath>
#include <vector>

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
        int min_dist = abs(candidate.x - coords[0].x) + abs(candidate.y - coords[0].y);
        int dist_to_be_traveled = 0;
        for (int m = 0; m < coords.size(); m++) {
            int vector_index_to_be_erased = -1;
            for (int l = 0; l < coords.size(); l++) {
                int diffX = candidate.x - coords[l].x;
                int diffY = candidate.y - coords[l].y;
                if (abs(diffX + diffY) <= min_dist) {
                    min_dist = abs(diffX + diffY);
                    candidate.x = coords[l].x;
                    candidate.y = coords[l].y;
                    vector_index_to_be_erased = l;
                }
            }
            dist_to_be_traveled += min_dist;
            coords.erase(coords.begin() + vector_index_to_be_erased);
        }
        
    }
}