#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    if (x > 10)
        std::cout << x << " is greater than ten.\n";
    else
        std::cout << x << " is not greater than ten.\n";

    return 0;
}




