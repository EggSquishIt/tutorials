
// Compile this program with:
// gcc hello.c -o hello
// Then run it with:
// ./hello

// This include directive takes the contents of the header file named "stdio.h" and splices it into the code right here
// The file in question contains, among other things, a declaration of printf() which is needed here
// The printf() function itself is part of the C standard library
#include <stdio.h>

// This is a function named "main" which is run when the program starts
// The "int" at the start of the line is a return type, and means the main() function returns an integer number
// "argc" and "argv" are variables providing the command line arguments for the program (unused here)
int main(int argc, char *argv[])
{
    // Calls the "printf" function, passing a text string to it
    // The function sends the text (which already includes a newline) to stdout
    printf("Hello world!\n");

    // This is a return value from the main() function
    // The return value of main() tells the environment where the program is run from whether any problems occurred
    // Returning 0 means "no problems"
    return 0;
}

