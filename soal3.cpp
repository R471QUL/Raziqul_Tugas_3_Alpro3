#include <iostream>
using namespace std;

bool kabisat(int tahun) {
    if (tahun % 400 == 0) return true;
    if (tahun % 4 == 0 && tahun % 100 != 0) return true;
    return false;
}

int main() {
    int A, B;
    cin >> A >> B;

    if (B >= 0) {
        for (int i = 0; i <= B; i++) {
            int tahun = A + i;
            cout << tahun;

            if (kabisat(tahun))
                cout << " kabisat" << endl;
            else
                cout << " bukan kabisat" << endl;
        }
    } else {
        for (int i = 0; i >= B; i--) {
            int tahun = A + i;
            cout << tahun;

            if (kabisat(tahun))
                cout << " kabisat" << endl;
            else
                cout << " bukan kabisat" << endl;
        }
    }

    return 0;
}
