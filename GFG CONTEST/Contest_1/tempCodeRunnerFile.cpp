#include <iostream>
#include <cmath>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int root = std::sqrt(number);
    int nearest_square = root * root;
    
    if (nearest_square > number) {
        nearest_square = (root - 1) * (root - 1);
    }
    
    std::cout << "The nearest perfect square is: " << nearest_square << std::endl;
    
    return 0;
}
