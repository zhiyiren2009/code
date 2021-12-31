#include <iostream>
#include <vector>

using namespace std;

struct student {
    int id = 0, level = 1, experience = 0, x1 = 0, x2 = 0, x3 = 0;

    void update_level() {
        level += experience / 1000;
        level %= 1000;
    }

    void update_experience() {
        experience += x1 * 500 + x2 * 200 + x3 * 400;
    }
};

int main() {
    vector <student> stu;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        student tmp;
        cin >> tmp.x1 >> tmp.x2 >> tmp.x3;
        tmp.id = i + 1;
        stu.push_back(tmp);
    }
    for (auto &c: stu) {
        c.update_experience();
        c.update_level();
    }
    for (auto &c: stu)
        cout << c.id << " " << c.level << endl;
    return 0;
}