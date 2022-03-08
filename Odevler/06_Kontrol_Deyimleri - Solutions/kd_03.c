/*
 * Author: Fatih Han Caglayan
 * Exercise: 06_Kontrol_Deyimleri kd_03 odevi
 *
 */


#include <stdio.h>
#include <futility.h>

int main()
{
    unsigned number_of_prints = display_collatz(72543l);
    printf("\n\n");
    printf("%d", number_of_prints);
}