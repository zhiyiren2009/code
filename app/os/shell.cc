#include <iostream>
#include <string>

using namespace std;

bool shell(std::string prog, std::string args);

int main() {
    cout << "OS Shell" << endl;
    string prog = "", args = "";
    while (cout << "shell $ " && cin >> prog) {
        if (prog == "exit") // 退出
            return 0;
        else // 不是退出
        {
            cin.ignore();                    // 清空缓冲区 以便 getline
            if (getline(cin, args))     // 如果有输入
                if (!shell(prog, args)) // 如果返回false 即不存在命令 就打印错误信息
                    cout << "shell: command not found: " << prog << endl;
        }
    }
    return 0;
}
