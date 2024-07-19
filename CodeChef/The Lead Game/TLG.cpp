#include <iostream>

int main() {
    int t;
    std::cin >> t;

    int m = 0, n = 0, d1 = 0, d2 = 0, lead1 = 0, lead2 = 0;
    int p1, p2;

    for (int i = 0; i < t; ++i) {
        std::cin >> p1 >> p2;
        m += p1;
        n += p2;

        if (m >= n) {
            d1 = m - n;
        } else {
            d2 = n - m;
        }

        if (d1 > lead1) {
            lead1 = d1;
        }

        if (d2 > lead2) {
            lead2 = d2;
        }
    }

    if (lead1 > lead2) {
        std::cout << "1 " << lead1 << std::endl;
    } else {
        std::cout << "2 " << lead2 << std::endl;
    }

    return 0;
}
