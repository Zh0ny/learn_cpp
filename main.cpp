#include <iostream>

int main()
{
    std::string text { "Hello World!" }; // direct-list-initilization
    std::cout << text << std::endl;

    [[maybe_unused]] int a;     // default-initialization (no initializer) with [[maybe_unused]] attribute c++17

    //std::cout << "Variable a value = " + a << std::endl; //error: local variable not initialized

    // Variable Assignment

    a = 5; // copy assignment of value 5 into variable width
    std::cout << a ; 
    a = 7; // change value stored in variable width to 7
    std::cout << a ;

    // Variable initialization
    int width {5};       // define variable width and initialize with initial value 5
    std::cout << width; // prints 5

    // Different forms of initialization

    // Traditional initialization forms:
    int b = 5;     // copy-initialization (initial value after equals sign)
    std::cout << "Variable b value: " << b << std::endl;
    int c ( 6 );   // direct-initialization (initial value in parenthesis)
    std::cout << "Variable c value: " << c << std::endl;

    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces)
    std::cout << "Variable d value: " << d << std::endl;
    int e {};      // value-initialization (empty braces)
    std::cout << "Variable e value: " << e << std::endl;

    // List-initialization disallows narrowing conversions

    // An integer can only hold non-fractional values.
    // Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
    // Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

    //int w1 { 4.5 }; //compile error: list-init does not allow narrowing conversion

    //int w2 = 4.5;   // compiles: w2 copy-initialized to value 4, gives error of narrowing conversion
    //std::cout << "Variable w2 value: " + w2 << std::endl;
    //int w3 (4.5);   // compiles: w3 direct-initialized to value 4, gives error of narrowing conversion
    //std::cout << "Variable w3 value: " + w3 << std::endl;
    
    // Initializing multiple variables

    int a2 = 5, b2 = 6;          // copy-initialization
    int c2 ( 7 ), d2 ( 8 );      // direct-initialization
    int e2 { 9 }, f { 10 };     // direct-list-initialization
    int i {}, j {};            // value-initialization

    std::cout << a2 << b2 << c2 << d2 << e2 << f << i << j << std::endl;

    // The [[maybe_unused]] attribute C++17

    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used

    return 0;
}
