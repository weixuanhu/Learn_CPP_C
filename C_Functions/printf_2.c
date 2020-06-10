// https://alvinalexander.com/programming/printf-format-cheat-sheet/
/* 
 * Summary: This page is a printf formatting cheat sheet. 
 * I originally created this cheat sheet for my own purposes, 
 * and then thought I would share it here.
 * A great thing about the printf formatting syntax is that the format specifiers you can use are very similar 
 * — if not identical — between different languages, including C, C++, Java, Perl, PHP, Ruby, Scala, and others. 
 * This means that your printf knowledge is reusable, which is a good thing.
 */

/*
    %c 	character
    %d 	decimal (integer) number (base 10)
    %e 	exponential floating-point number
    %f 	floating-point number
    %i 	integer (base 10)
    %o 	octal number (base 8)
    %s 	a string of characters
    %u 	unsigned decimal (integer) number
    %x 	number in hexadecimal (base 16)
    %% 	print a percent sign
    \% 	print a percent sign
*/

#include <stdio.h>
int main(int argc, char* argv[]){
    // Controlling integer width with printf
    // The %3d specifier is used with integers, 
    // and means a minimum width of three spaces, 
    // which, by default, will be right-justified:
    printf("%3d\n", 0);
    printf("%3d\n", 123456789); 
    printf("%3d\n", -10);
    printf("%3d\n", -123456789);

    // Left-justifying printf integer output
    printf("%-3d\n", 0);
    printf("%-3d\n", 123456789);
    printf("%-3d\n", -10);
    printf("%-3d\n", -123456789);

    // The printf integer zero-fill option
    printf("%03d\n", 0);
    printf("%03d\n", 1);
    printf("%03d\n", 123456789);
    printf("%03d\n", -10);
    printf("%03d\n", -123456789);

    // printf integer formatting
    printf("'%5d'\n", 10);        // At least five wide
    printf("'%-5d'\n", 10);       // At least five-wide, left-justified
    printf("'%05d'\n", 10);       // At least five-wide, zero-filled
    printf("'%+5d'\n", 10);       // At least five-wide, with a plus sign
    printf("'%-+5d'\n", 10);      // Five-wide, plus sign, left-justified

    // formatting floating point numbers with printf
    printf("'%.1f'\n", 10.3456);  // Print one position after the decimal
    printf("'%.2f'\n", 10.3456);  // Two positions after the decimal
    printf("'%8.2f'\n", 10.3456); // Eight-wide, two positions after the decimal
    printf("'%8.4f'\n", 10.3456); // Eight-wide, four positions after the decimal
    printf("'%08.2f'\n", 10.3456);    // Eight-wide, two positions after the decimal, zero-filled
    printf("'%-8.2f'\n", 10.3456);    // Eight-wide, two positions after the decimal, left-justified
    printf("'%-8.2f'\n", 101234567.3456); // Printing a much larger number with that same format

    // printf string formatting
    printf("'%s'\n", "Hello");    // A simple string
    printf("'%10s'\n", "Hello");  // A string with a minimum length
    printf("'%-10s'\n", "Hello"); // Minimum length, left-justified

    // printf special characters
    /*
        \a 	audible alert
        \b 	backspace
        \f 	form feed
        \n 	newline, or linefeed
        \r 	carriage return
        \t 	tab
        \v 	vertical tab
        \\ 	backslash
    */
}

