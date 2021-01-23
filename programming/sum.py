
# Run this program with:
# python3 sum.py 42 51

# Imports the "sys" module from the python standard library
import sys

# This is done in several steps:
# sys.argv is a list of command line arguments (and also the script itself at index 0)
# First, we use indexing on sys.argv, sys.argv[1] and sys.argv[2] will be the first and second command line argument
# Second, we pass the command line arguments to the int() function, which converts them from text strings into numbers
# Third, we add the number together with the "+" operator
# Fourth, we print the resulting number (and a newline) using print()
print(int(sys.argv[1]) + int(sys.argv[2]))

