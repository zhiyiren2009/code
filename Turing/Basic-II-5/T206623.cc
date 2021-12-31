#include <iostream>
#include <algorithm>

using namespace std;

struct point {
    int x = 0, y = 0, id = 0;

    bool operator<(const point &point2) {
        return x < point2.x || y < point2.y;
    }
};

int main() {
    int boat_n = 0;
    point boat_max;
    cin >> boat_n;
    point boat[boat_n];
    for (point &c: boat)
        cin >> c.x >> c.y;
    sort(boat, boat + boat_n);
    for (int i = 0; i < boat_n; i++)
        cout << i << endl;
    cout << boat[boat_n].x << " " << boat[boat_n].y << endl;
    return 0;
}