
// Compile this program with:
// javac Sum.java
// Then run it with:
// java Sum 42 51

// This is a class; normally classes are used to implement object oriented programming,
// in this case it's just a container for main()
public class Sum {

    // This is a method (which is a function) named "main" which is run when the program starts
    // "args" is a variable containing the command line arguments for the program
    public static void main(String[] args) {

        // This is done in several steps:
        // First, we use indexing on args, args[0] and args[1] will be the first and second command line argument
        // Second, we pass the command line arguments to the Integer.parseInt() function, which converts them from text strings into numbers
        // Third, we add the number together with the "+" operator
        // Fourth, we print the resulting number (and a newline) using System.out.println()
        System.out.println(Integer.parseInt(args[0]) + Integer.parseInt(args[1]));
    }
}

