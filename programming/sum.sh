
# Run this program with:
# bash sum.sh 42 51

# This is done in several steps:
# $1, $2 etc. are individual "special" variables containing the command line arguments (and also the script itself in $0)
# First, we expand the variables into their content, and add a "+" sign in between
# Second, we pass that to the $(( ... )) sequence, which calculates the sum and expands to the result
# Third, we print the resulting number (and a newline) using echo

echo $(( $1 + $2 ))

