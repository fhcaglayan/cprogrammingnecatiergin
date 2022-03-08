/*
 * Author: Fatih Han Caglayan
 * Exercise: Ders 12 Uykucu odevi
 */

#include <stdio.h>
#include <stdlib.h>

// Euclidian algorithm for calculating the gcd of two integers
int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int get_number_of_digits(int num) {
    int count = 0;

    do {
        count++;
        num /= 10;
    } while(num != 0);

    return count;
}

int get_digit(int value, unsigned position_from_left) {
    if (value == 0)
        return 0; // break out of recursion if 0 is reached
    if (position_from_left == 1)
        return abs(value) % 10;
    return get_digit(value / 10, position_from_left - 1);
}

// Test function to check whether two digit fraction is simplifiable by the sleepy method
// This function will assume that 20/20 is not simplifiable by the sleepy method, because it simplifies to 1/1 instead of 2/2
int simplifiable_by_sleepy_method(int numerator, int denominator) {
    int common_digit_numerator = 0;
    int common_digit_denominator = 0;

    if(get_digit(numerator, 1) == get_digit(denominator, 1)) {
        common_digit_numerator = 1;
        common_digit_denominator = 1;
    }
    else if(get_digit(numerator, 1) == get_digit(denominator, 2)) {
        common_digit_numerator = 1;
        common_digit_denominator = 2;
    }
    else if(get_digit(numerator, 2) == get_digit(denominator, 1)) {
        common_digit_numerator = 2;
        common_digit_denominator = 1;
    }
    else if(get_digit(numerator, 2) == get_digit(denominator, 2)) {
        common_digit_numerator = 2;
        common_digit_denominator = 2;
    }

    // if no common digit
    if(!common_digit_numerator) {
        return 0;
    }

    int gcd_val; // I could not name this gcd because it was otherwise conflicting with the

    // if not simplifiable
    if((gcd_val = gcd(numerator, denominator)) == 1) {
        return 0;
    }

    int new_numerator = numerator / gcd_val;
    int new_denominator = denominator / gcd_val;

    // if not simplifiable to single digit numerator and denominator, e.g. 46/22 --> 23/11
    if(get_number_of_digits(new_numerator) != 1 || get_number_of_digits(new_denominator) != 1) {
        return 0;
    }

    if((new_numerator == get_digit(numerator, 1) || new_numerator == get_digit(numerator, 2)) && (new_denominator == get_digit(denominator, 1) || new_denominator == get_digit(denominator, 2))) {
        if(new_numerator != get_digit(numerator, common_digit_numerator) && new_denominator != get_digit(denominator, common_digit_denominator)) {
            return 1;
        }
    }
	
    return 0;
}

int main()
{
    for(int numerator = 10; numerator < 100; numerator++) {
        for(int denominator = 10; denominator < 100; denominator++) {
            if(simplifiable_by_sleepy_method(numerator, denominator)){
                int gcd_val = gcd(numerator, denominator);
                printf("%d / %d = %d / %d\n", numerator, denominator, numerator / gcd_val, denominator / gcd_val);
            }
        }
    }
}
