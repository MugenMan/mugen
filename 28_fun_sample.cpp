#include <iostream>

int sum_loop(int n) {
    int r = 0;

    while (n > 0) {
        if (n % 2 != 0) {
            r += n;
        }

        n--;
    }

    return r;
}

int sum_rec(int n) {
    if (n == 0) return 0;

    if (n % 2 != 0) {
        return sum_rec(n - 1) + n;
    } else {
        return sum_rec(n - 1);
    }
}

int main() {
    int n;

    std::cout << "Enter number: " << std::flush;
    std::cin >> n;

    std::cout << sum_rec(n) << std::endl;
    std::cout << sum_loop(n) << std::endl;
}
