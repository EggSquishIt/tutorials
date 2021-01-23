
// Run this program with:
// node sum.js 42 51

// This is done in several steps:
// process.argv is a list of command line arguments (and also the "node" engine at index 0 and the script itself at index 1)
// First, we use indexing on process.argv, process.argv[2] and process.argv[3] will be the first and second command line argument
// Second, we pass the command line arguments to the parseInt() function, which converts them from text strings into numbers
// Third, we add the number together with the "+" operator
// Fourth, we print the resulting number (and a newline) using console.log()
console.log(parseInt(process.argv[2]) + parseInt(process.argv[3]));

