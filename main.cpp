#include <iostream>

// This function represent the use of std::cin to get input from the user, about section 1.5.6, Question 1 and 2
int main()
{
    // std::cin
    std::cout << "Enter a number: ";
    int x {};

    std::cin >> x;

    std::cout << "You entered: " << x << '\n';

    std::cout << "Enter two numbers separated by a space: ";
    int x2 {};
    int y {};

    std::cin >> x2 >> y;

    std::cout << "You entered " << x2 << " and " << y << '\n';

    // std::cin is buffered

    std::cout << "Enter two numbers: ";

    int x3{};
    std::cin >> x3;

    int y2{};
    std::cin >> y2;

    std::cout << "You entered " << x3 << " and " << y2 << '\n';

    // Question 1

    std::cout << "Enter a number: ";
    int x4 {};
    std::cin >> x4;
    std::cout << "You entered: " << x4 << '\n';

    //Question 2

    std::cout << "Enter three numbers: ";
    int x5 {};
    int y3 {};
    int z {};
    std::cin >> x5 >> y3 >> z;
    std::cout << "You entered " << x5 << ", " << y3 << ", and " << z << '\n';

    return 0;
}
