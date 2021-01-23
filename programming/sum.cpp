
// Compile this program with:
// g++ sum.cpp -o sum
// Then run it with:
// ./sum 42 51

// This include directive takes the contents of the header file named "iostream" and splices it into the code right here
// The file in question contains, among other things, a declaration of "cout" which is needed here
// The "cout" object itself is part of the C++ standard library
#include <iostream>

// This include directive takes the contents of the header file named "stdlib.h" and splices it into the code right here
// The file in question contains, among other things, a declaration of strtol() which is needed here
// The strtol() function itself is part of the C standard library
#include <stdlib.h>

// This is a function named "main" which is run when the program starts
// The "int" at the start of the line is a return type, and means the main() function returns an integer number
// "argc" and "argv" are variables providing the command line arguments for the program
int main(int argc, char *argv[])
{
    // "argc" contains the number of text strings in "argv", which should be 3 (for the program name and two command line arguments)
    // This "if" statement is a conditional which runs the code inside it only if the condition in the parentheses is true
    // The condition is that whatever is in "argc" must be less than 3
    if(argc < 3)
    {
        // If argc is less than 3, we get here

        // Call printf() with an error message
        printf("Not enough arguments!\n");

        // This is a return value from the main() function
        // The return value of main() tells the environment where the program is run from whether any problems occurred
        // Returning anything other than 0 means "there were problems"
        // Also note that this "return" statement will stop execution of main(), so the code below is not run
        return 1;
    }

    // If argc is not less than 3, we get here

    // This is done in several steps:
    // First, we use indexing on argv, argv[1] and argv[2] will be the first and second command line argument
    // Second, we pass the command line arguments to the strtol() function, which converts them from text strings into numbers
    // Third, we add the number together with the "+" operator
    // Fourth, we print the resulting number and a newline (the std::endl) using std::cout's "<<" operator
    std::cout << (strtol(argv[1], 0, 0) + strtol(argv[2], 0, 0)) << std::endl;

    // This is a return value from the main() function
    // The return value of main() tells the environment where the program is run from whether any problems occurred
    // Returning 0 means "no problems"
    return 0;
}

