/*
 * Author: Fatih Han Caglayan
 * Exercise: Ders 12 Uykucu odevi
 */

#include <stdio.h>
#include <stdlib.h>

int get_digit(int value, unsigned position_from_left) {
    if (value == 0) {
        return 0; // break out of recursion if 0 is reached
    }

    if (position_from_left == 1) {
        return abs(value) % 10;
    }

    return get_digit(value / 10, position_from_left - 1);
}


int is_equal_fractions(int num1, int den1, int num2, int den2) {
    if((num1 == 0 && den1 == 0) || (num2 == 0 && den2 == 0)) {
        return 0;
    }

    if(num1 * den2 == num2 * den1) {
        return 1;
    }

    return 0;
}

// Function that checks whether a two digit fraction is simplifiable by the sleepy method and prints if so
// This function will assume that 20/20 is simplifiable by the sleepy method, because it can simplify to 2/2
void simplify_by_sleepy_method(int numerator, int denominator) {
    if(get_digit(numerator, 1) == get_digit(denominator, 1)) {
        if(is_equal_fractions(numerator, denominator, get_digit(numerator, 2), get_digit(denominator, 2))) {
            printf("%d / %d = %d / %d\n", numerator, denominator, get_digit(numerator, 2), get_digit(denominator, 2));
        }
    }
    else if(get_digit(numerator, 1) == get_digit(denominator, 2)) {
        if(is_equal_fractions(numerator, denominator, get_digit(numerator, 2), get_digit(denominator, 1))) {
            printf("%d / %d = %d / %d\n", numerator, denominator, get_digit(numerator, 2), get_digit(denominator, 1));
        }
    }
    else if(get_digit(numerator, 2) == get_digit(denominator, 1)) {
        if(is_equal_fractions(numerator, denominator, get_digit(numerator, 1), get_digit(denominator, 2))) {
            printf("%d / %d = %d / %d\n", numerator, denominator, get_digit(numerator, 1), get_digit(denominator, 2));
        }
    }
    else if(get_digit(numerator, 2) == get_digit(denominator, 2)) {
        if(is_equal_fractions(numerator, denominator, get_digit(numerator, 1), get_digit(denominator, 1))) {
            printf("%d / %d = %d / %d\n", numerator, denominator, get_digit(numerator, 1), get_digit(denominator, 1));
        }
    }
}


int main()
{
    for(int numerator = 10; numerator < 100; numerator++) {
        for(int denominator = 10; denominator < 100; denominator++) {
            simplify_by_sleepy_method(numerator, denominator);
        }
    }
}
