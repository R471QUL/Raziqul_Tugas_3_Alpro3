#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int angka = 1;

    for (int i = 1; i <= n; i++) {
        cout << angka << " ";

        if (i % 2 == 1)
            angka += 5;
        else
            angka += 3;
    }

    return 0;
}
