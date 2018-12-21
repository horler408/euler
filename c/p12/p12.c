# include <stdio.h>
# include <stdlib.h>
# include "../minunit.h"

/* Testing function prototype */
static char * all_tests();

/* Test counter. Incremented by minunit.h */
int tests_run = 0;

int main() {
    /* 
     * The reults of all_tests() from minunit.h will == 0 when all 
     * tests pass. Otherwise, all_tests() will return a string 
     * describing the failure. 
    */
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    
    /* 
     * minunit.h counts the number of tests it ran, in order listed in
     * all_tests() below, until a test fails and all_tests quits. 
    */
    printf("Tests run %d\n", tests_run);
    
    return result != 0;
}

/* PROGRAM */
int number_of_divisors(unsigned long x) {
    return 0;
}


/* TESTS */
static char * test_1() {
    mu_assert("Error: 1 !>> 1", number_of_divisors(1) == 1);
    return 0;
}

static char * all_tests() {
    mu_run_test(test_1);

    return 0;
}
