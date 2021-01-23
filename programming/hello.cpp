
// Compile this program with:
// g++ hello.cpp -o hello
// Then run it with:
// ./hello

// This include directive takes the contents of the header file named "iostream" and splices it into the code right here
// The file in question contains, among other things, a declaration of "cout" which is needed here
// The "cout" object itself is part of the C++ standard library
#include <iostream>

// This is a function named "main" which is run when the program starts
// The "int" at the start of the line is a return type, and means the main() function returns an integer number
// "argc" and "argv" are variables providing the command line arguments for the program (unused here)
int main(int argc, char *argv[])
{
    // Uses the custom "<<" operator on the "cout" object, passing a text string to it
    // The operator's implementation sends the text to stdout
    // We also use the custom "<<" operator another time, passing a newline to it
    // The operator's implementation sends the newline to stdout
    std::cout << "Hello world!" << std::endl;

    // This is a return value from the main() function
    // The return value of main() tells the environment where the program is run from whether any problems occurred
    // Returning 0 means "no problems"
    return 0;
}

