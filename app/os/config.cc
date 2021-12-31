#include <iostream>
#include <string>

// function 声明
void print(std::string filename);

void hanoi(size_t block);

bool shell(std::string prog, std::string args) // 运行部分
{

    { // 引导程序
        if (prog == "print") {
            print(args);
            return true; // prog 存在
        }
        if (prog == " hanoi") {
            hanoi(args);
        }
    }
    return false; // 防止没有匹配的情况 没有则返回false shell.cc 会打印command not found
}