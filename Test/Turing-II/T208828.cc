#include <iostream>
#include <cmath>

using namespace std;

const int bit = 8;

void transform(int binary[], int num) {
    for (int i = bit - 1; i > 0; i--) {
        binary[i] = num & 1;
        num = num >> 1;
        if (num == 0)
            break;
    }
}

void logicNot(int binary[]) {
    for (int i = bit - 1; i > 0; i--) {
        if (binary[i] == 0)
            binary[i] = 1;
        else
            binary[i] = 0;
    }
}

void addOne(int binary[]) {
    for (int i = bit - 1; i > 0; i--) {
        if (binary[i] == 1) // 处理进位
            binary[i] = 0;
        else // 遇到 0 就不用进位，直接加 1 即可
        {
            binary[i] = 1;
            break;
        }
    }
}

int binary[bit];

int main() {
    int num = 0;
    cin >> num;
    transform(binary, abs(num)); // 转整数部分
    if (num < 0)                 // 负数情况
    {
        binary[0] = 1; // 符号位为 -1 ,即负数
        logicNot(binary);    // 取反
        addOne(binary);      // 加 1
    }
    for (int c: binary)
        cout << c;
    cout << endl;
    return 0;
}

// #include <iostream>

// using namespace std;

// const int BIT = 8;

// void transform(int binary[], int num)
// {
// 	for (int i = BIT - 1; i > 0; i--)
// 	{
// 		binary[i] = num % 2;
// 		num = num >> 1;
// 		if (num == 0)
// 			break;
// 	}
// }

// void logicNot(int binary[])
// {
// 	for (int i = BIT - 1; i > 0; i--)
// 	{
// 		if (binary[i] == 1)
// 			binary[i] = 0;
// 		else
// 			binary[i] = 1;
// 	}
// }

// void addOne(int binary[])
// {
// 	for (int i = BIT - 1; i > 0; i--)
// 	{
// 		if (binary[i] == 1)
// 			binary[i] = 0;
// 		else
// 		{
// 			binary[i] = 1;
// 			break;
// 		}
// 	}
// }

// int main()
// {
// 	int num;
// 	cin >> num;

// 	int binary[BIT] = {0};
// 	if (num >= 0)
// 		transform(binary, num);
// 	else
// 	{
// 		binary[0] = 1;
// 		transform(binary, -num);
// 		logicNot(binary);
// 		addOne(binary);
// 	}

// 	for (auto &c : binary)
// 		cout << c;
// 	cout << endl;
// }