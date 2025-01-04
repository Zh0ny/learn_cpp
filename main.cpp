#include <iostream>

int my_function_name(){return 0;} // conventional (separated by underscores/snake_case)
int myFunctionName(){return 0;}  // conventional (intercapped/camelCase)
int MyFunctionName(){return 0;}   // unconventional (should start with lower case letter)

int main()
{
    [[maybe_unused]]int value; // conventional
    
    [[maybe_unused]]int Value; // unconventional (should start with lower case letter)
    [[maybe_unused]]int VALUE; // unconventional (should start with lower case letter and be in all lower case)
    [[maybe_unused]]int VaLuE; // unconventional (see your psychiatrist) ;)

    [[maybe_unused]]int my_variable_name;   // conventional (separated by underscores/snake_case)

    [[maybe_unused]]int myVariableName;     // conventional (intercapped/camelCase)

    //int my variable name;   // invalid (whitespace not allowed)
    //int my function name(); // invalid (whitespace not allowed)

    [[maybe_unused]]int MyVariableName;     // unconventional (should start with lower case letter)

    return 0;
}
