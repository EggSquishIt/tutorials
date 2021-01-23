
// Compile this program with:
// javac Hello.java
// Then run the resulting "Hello.class" file with:
// java Hello

// This is a class; normally classes are used to implement object oriented programming,
// in this case it's just a container for main()
public class Hello {

    // This is a method (which is a function) named "main" which is run when the program starts
    // "args" is a variable containing the command line arguments for the program (unused here)
    public static void main(String[] args) {
        // Calls the "println" method (which is a function), passing a text string to it
        // The function sends the text (and a newline) to stdout
        System.out.println("Hello world!");
    }
}

