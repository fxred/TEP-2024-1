#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, rotDeg;
    cin >> x;
    cin >> y;
    cin >> rotDeg;

    auto currRad = atan2(y, x);

    // cout << currRad << endl;

    double pi = 3.14159265358979323846;

    auto rotRad = rotDeg*(pi/180);

    // cout << setprecision(numeric_limits<double>::digits10 + 1) << pi << endl;

    auto finalRad = rotRad + currRad;

    auto hip = hypot(x, y);

    auto newX = cos(finalRad)*hip;

    auto newY = sin(finalRad)*hip;

    cout << setprecision(numeric_limits<double>::digits10 + 1) << newX << " " << newY << endl;
}