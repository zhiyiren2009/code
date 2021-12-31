#include <iostream>
#include <fstream>
#include <string>

void print(std::string filename) {

    std::ifstream print;               // 打印的stream
    print.open(filename);              // 打开文件
    std::string out;                   // 存放输出的内容
    while (getline(print, out))        // 写到out 直到文件结束 (getline读行 保证每行超过1个词的时候格式错误)
        std::cout << out << std::endl; // 打印
    print.close();                     // 关闭文件
}