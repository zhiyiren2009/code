#include <iostream>

using namespace std;
int step = 0;

inline void move(int n, char begin, char end, char helper);

int main() {
    int n;
    cin >> n;
    move(n, 'a', 'b', 'c');
    cout << step << endl;
    return 0;
}

inline void move(int n, char begin, char helper, char end) {
    if (n == 1)
        ++step;
    else {
        move(n - 1, begin, end, helper);
        ++step;
        move(n - 1, helper, begin, end);
    }
}