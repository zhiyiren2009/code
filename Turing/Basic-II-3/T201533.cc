#include <iostream>

using namespace std;

struct book {
    int id = 0;
    double price = 0.0, discount = 0.0;
};

book bo[105];

int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> bo[i].id >> bo[i].price >> bo[i].discount;
    int max_discount = 0;
    for (int i = 0; i < n; i++)
        if ((bo[i].price - bo[i].discount) > (bo[max_discount].price - bo[max_discount].discount))
            max_discount = bo[i].id;
    cout << max_discount << endl;
    return 0;
}