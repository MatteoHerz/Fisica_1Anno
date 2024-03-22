#include <iostream>
using namespace std;

int iterativa_f(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 2;
    } else if (n == 2) {
        return 4;
    }

    int prev_prev = 0;
    int prev = 2;
    int current = 4;

    for (int i = 3; i <= n; i++) {
        int new_value = current + 2 * prev + 3 * prev_prev;
        prev_prev = prev;
        prev = current;
        current = new_value;
    }

    return current;
}

int main() {
    // Esempio di utilizzo
    int n = 5;
    cout << "f(" << n << ") = " << iterativa_f(n) << endl;

    return 0;
}
