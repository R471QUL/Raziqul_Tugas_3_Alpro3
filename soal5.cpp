#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cin >> n;

    if(n <= 1) {
        isPrime = false;
    } else {
        for(int i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        cout << "Prima";
    else
        cout << "Bukan Prima";
}
