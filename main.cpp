#include <iostream>

int main()
{
    // Some language elements must be whitespace-separated

    int x;
    int                y;
                int
    z;

    // Quoted text takes the amount of whitespace literally

    std::cout << "Hello world!";
    std::cout << "Hello          world!";

    //std::cout << "Hello
    // world!"; // Not allowed!

    std::cout << "Hello "
     "world!"; // prints "Hello world!"

    // Basic formatting

    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; // one extra indentation for continuation line

    std::cout << "This is another really, really, really, really, really, really, really, "
                 "really long line\n"; // text aligned with the previous line for continuation line

    std::cout << "This one is short\n";

    return 0;
}
