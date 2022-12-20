#include <stdio.h>
#include <math.h>
/**
 * Calculates the value of x based on k unsigned integers.
 * @return int 0 to signify the program has fully executed.
 */
int main() {
    // assigning variables
    unsigned int k;
    // this int stores the numbers
    unsigned int x = 0;
    // asking for user input
    printf("Please enter k: ");
    // scanning the user input
    scanf("%u", &k);
    printf("Please enter %d unsigned ints: ", k);
    for (int i = 0; i < k; i++) {
        unsigned int y;
        unsigned int val = 1;
        // calculates the max value the numbers can have
        for (int i = 0; i < 32 / k; i++) {
            val *= 2;
        } // for
        // scans the k inputs
        scanf("%u", &y);
        // checks if the inputs are valid
        if (y > (val) - 1) {
            printf("The integer %d is an invalid input.", y);
            return 1;
        } // if
        // shifts the bits over to the left.
        x = x << (32 / k);
        // OR operator to shift the bits to the beginning
        x = x | y;
    } // for
    // prints the overall value after finishing the loop
    printf("Overall Value = %d\n", x);
    return 0;
} // main
