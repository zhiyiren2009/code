#ifndef CODE_SCREEN_H
#define CODE_SCREEN_H
#include <iostream>

#define pixelX 32
#define pixelY 32
char pixel[pixelX][pixelY];
void clean() {
    for (int i = 0; i < pixelX; ++i)
        for (int j = 0; j < pixelY; ++j)
            pixel[i][j] = ' ';
}

void put(char c = ' ', int x = 0, int y = 0) {
    pixel[x][y] = c;
}

void print() {
    for (int i = 0; i < pixelX; ++i) {
        for (int j = 0; j < pixelY; ++j)
            std::cout << pixel[i][j];
        std::cout << std::endl;
    }
}

#endif //CODE_SCREEN_H
