/*
 * Author: Fatih Han Caglayan
 * Exercise: 06_Kontrol_Deyimleri kd_09 odevi
 *
 */


#include <stdio.h>
#include <futility.h>

int main()
{
    printf("%d\n", get_number_of_digits(34879));
    printf("%d\n", get_number_of_digits(31));
    printf("%d\n", get_number_of_digits(999));


    printf("%d\n", get_sum_of_digits(34879));
    printf("%d\n", get_sum_of_digits(31));
    printf("%d\n", get_sum_of_digits(999));


    printf("%d\n", get_digital_root(34879));
    printf("%d\n", get_digital_root(31));
    printf("%d\n", get_digital_root(999));
    printf("%d\n", get_digital_root(9999));
    printf("%d\n", get_digital_root(9998));


}