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

    std::cout << 3 + 4
    + 5 + 6
    * 7 * 8;
    /* Harder to read
        cost = 57;
        pricePerItem = 24;
        value = 5;
        numberOfItems = 17;
    */
    //easy to read
    int cost          = 57;
    int pricePerItem  = 24;
    int value         = 5;
    int numberOfItems = 17;

    std::cout << "Hello world!\n"; // cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read
    std::cout << "Yeah!\n"; // especially when lines are different lengths

    std::cout << "Hello world!\n";                  // cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n";  // these comments are easier to read
    std::cout << "Yeah!\n";                         // especially when all lined up

    // cout lives in the iostream library
    std::cout << "Hello world!\n";
    // these comments make the code hard to read
    std::cout << "It is very nice to meet you!\n";
    // especially when all bunched together
    std::cout << "Yeah!\n";

    // cout lives in the iostream library
    std::cout << "Hello world!\n";

    // these comments are easier to read
    std::cout << "It is very nice to meet you!\n";

    // when separated by whitespace
    std::cout << "Yeah!\n";

    return 0;
}
