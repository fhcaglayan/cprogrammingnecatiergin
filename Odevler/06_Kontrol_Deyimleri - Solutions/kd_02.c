/*
 * Author: Fatih Han Caglayan
 * Exercise: 06_Kontrol_Deyimleri kd_02 odevi
 *
 */

#include <stdio.h>
#include <futility.h>

int main()
{
    printf("%d", are_friends(220, 286)); // no friends
    printf("%d", are_friends(220, 290)); // no friends
    printf("%d", are_friends(500, 10)); // no friends
    printf("%d", are_friends(220, 284)); // from here onwards all friends
    printf("%d", are_friends(1184, 1210));
    printf("%d", are_friends(2620, 2924));
    printf("%d", are_friends(5020, 5564));
    printf("%d", are_friends(6232, 6368));
    printf("%d", are_friends(10744, 10856));
    printf("%d", are_friends(12285, 14595));
    printf("%d", are_friends(17296, 18416));
    printf("%d", are_friends(63020, 76084));
    printf("%d", are_friends(66928, 66992));
    printf("%d", are_friends(67095, 71145));
    printf("%d", are_friends(69615, 87633));
    printf("%d", are_friends(79750, 88730));
    printf("%d", are_friends(100485, 124155));
    printf("%d", are_friends(122265, 139815));
    printf("%d", are_friends(122368, 123152));
    printf("%d", are_friends(141664, 153176));
    printf("%d", are_friends(142310, 168730));
    printf("%d", are_friends(171856, 176336));
    printf("%d", are_friends(176272, 180848));
    printf("%d", are_friends(185368, 203432));
    printf("%d", are_friends(196724, 202444));
}