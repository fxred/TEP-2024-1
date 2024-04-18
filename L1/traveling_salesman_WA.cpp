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
        int number_of_pairs;
        cin >> number_of_pairs;
        vector<Pair> coords;
        for (int j = 0; j < number_of_pairs; j++) {
            Pair xy;
            cin >> xy.x;
            cin >> xy.y;
            coords.push_back(xy);
        }
        Pair candidate = {0, 0};
        int min_dist = 2147483647;
        unsigned long long dist_to_be_traveled = 0;
        while (coords.size() > 0) {
            int vector_index_to_be_erased = -1;
            for (int l = 0; l < coords.size(); l++) {
                int diffX = candidate.x - coords[l].x;
                int diffY = candidate.y - coords[l].y;
                if (abs(diffX) + abs(diffY) < min_dist) {
                    min_dist = abs(diffX) + abs(diffY);
                    vector_index_to_be_erased = l;
                }
            }
            candidate.x = coords[vector_index_to_be_erased].x;
            candidate.y = coords[vector_index_to_be_erased].y;
            dist_to_be_traveled += min_dist;
            min_dist = 2147483647;
            coords.erase(coords.begin() + vector_index_to_be_erased);
        }
        auto a = abs(candidate.x - 0);
        auto b = abs(candidate.y - 0);
        auto last_distance = a+b;
        dist_to_be_traveled += last_distance;
        cout << dist_to_be_traveled << endl;
    }
}