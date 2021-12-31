#include <iostream>

using namespace std;
int step = 0;

inline void move(int n, char begin, char end, char helper);

int main() {
    int n;
    cin >> n;
    move(n, 'a', 'b', 'c');
    return 0;
}

inline void move(int n, char begin, char helper, char end) {
    if (n == 1)
        cout << ++step << ".Move " << n << " from " << begin << " to " << end << endl;
    else {
        move(n - 1, begin, end, helper);
        cout << ++step << ".Move " << n << " from " << begin << " to " << end << endl;
        move(n - 1, helper, begin, end);
    }
}