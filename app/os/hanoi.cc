#include <iostream>

using namespace std;
size_t step = 0;

inline void move(size_t block, char begin, char end, char helper);

void hanoi(size_t block) {
    move(block, 'a', 'b', 'c');
    cout << step << " step" << endl;
}

inline void move(size_t block, char begin, char helper, char end) {
    if (block == 1)
        ++step;
    else {
        move(block - 1, begin, end, helper);
        ++step;
        move(block - 1, helper, begin, end);
    }
}