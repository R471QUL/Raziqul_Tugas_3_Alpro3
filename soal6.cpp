#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;

    cin >> n;

    for(int i = 2; i <= n; i += 2) {
        total += i * i;
    }

    cout << total;
}
