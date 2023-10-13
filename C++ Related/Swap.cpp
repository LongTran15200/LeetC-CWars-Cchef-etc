//Using simple swap 


#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    // Swap the values of a and b using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    std::cout << "After swapping:\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";

    return 0;
}
