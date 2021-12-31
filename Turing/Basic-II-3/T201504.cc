#include <iostream>

using namespace std;

struct student {
    int id = 0;
    double m = 0.0, h = 0.0;

    double BMI() {
        return m / (h * h);
    }
};

student stu[100];

int main() {
    int n = 0;
    cin >> n;
    int i = 0;
    while (i < n) {
        cin >> stu[i].id >> stu[i].h >> stu[i].m;
        i++;
    }
    for (int j = 0; j < n; j++) {
        student c = stu[j];
        if (c.BMI() < 18.5) {
            cout << c.id << " Underweight" << endl;
        } else {
            if (c.BMI() >= 18.5 && c.BMI() < 24)
                cout << c.id << " Normal" << endl;
            else
                cout << c.id << " Overweight" << endl;
        }
    }
    return 0;
}