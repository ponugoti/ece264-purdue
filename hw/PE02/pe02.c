#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "answer02.h"

// a sample test function to call char_to_int
//
void test_char_to_int()
{
    printf("char_to_int: %d\texpected: 9\n", char_to_int('9'));
    printf("char_to_int: %d\texpected: 20\n", char_to_int('k'));
    printf("char_to_int: %d\texpected: 35\n", char_to_int('Z'));
    printf("char_to_int: %d\texpected: 36\n", char_to_int(','));
	printf("char_to_int: %d\texpected: 36\n", char_to_int('^'));
}

// a sample test function to call test_str_to_long_int
//
void test_str_to_long_int()
{
    char *endptr;  // this is for strtol
    int base; 

    // test for a range of base, including an invalid base 37
    // here are some suggestions for additional test, exceeding LONG_MAX, or 
    // going below LONG_MIN, and many others

    for (base = 2; base < 38; base++) {

       // before you call the function str_to_long_int
       // set errno to zero

       errno = 0;
       long int test = str_to_long_int("     -1A33Z", base);

       // print errno
       // typically, you want to check errno when the returned value
       // is LONG_MAX or LONG_MIN in a more useful program
       
       printf("\nbase:%d\n", base);
       printf("test1:%ld  errno:%d\n", test, errno);

       // call strtol to cross check the results 
       // note that the results should not match when base == 16.
       // before you call the function strtol
       // set errno to zero

       errno = 0;
       test = strtol("     -1A33Z", &endptr, base);
       printf("test2:%ld\t endptr:%s\t errno:%d\n", test, endptr, errno);
    }

}

int main(int argc, char * * argv)
{
    printf("Welcome to ECE264, we are working on PE02.\n\n");

    // testing the char_to_int function
    // question:  how to do a comprehensive test

    test_char_to_int();

    // testing the str_to_long_int function
    // question:  how to do a comprehensive test

    test_str_to_long_int();

    return EXIT_SUCCESS;
}
