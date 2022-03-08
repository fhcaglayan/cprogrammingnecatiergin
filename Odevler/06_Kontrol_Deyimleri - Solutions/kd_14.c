/*
 * Author: Fatih Han Caglayan
 * Exercise: 06_Kontrol_Deyimleri kd_14 odevi
 *
 */


#include <stdio.h>
#include <futility.h>

int main()
{
    int cnt_harshad = 0;
    int i = 1;

    while(cnt_harshad < 10)
    {
        if(is_harshad(i))
        {
            printf("%d ", i);
            cnt_harshad++;
        }
        i++;
    }

    cnt_harshad = 0;
    for(int i = 1; cnt_harshad < 100; i++)
    {
        if(is_harshad(i))
        {
            printf("%d ", i);
            cnt_harshad++;
        }
    }
}