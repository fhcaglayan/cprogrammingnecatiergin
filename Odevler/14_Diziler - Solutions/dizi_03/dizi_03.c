/*
 * Author: Fatih Han Caglayan
 * Exercise: 14_diziler dizi_03 odevi: Dizinin öğelerinin ardışık tamsayılardan oluşup oluşmadığını sınayın
 *
 */

#include <stdio.h>
#include "futility.h"

#define     SIZE		20

int main() {
    int a1[] = {74, 70, 73, 71, 83, 77, 84, 81, 82, 78, 86, 72, 79, 88, 76, 87, 75, 89, 80, 85}; //evet
    int a2[] = {43, 44, 48, 40, 50, 47, 45, 42, 52, 49, 54, 46, 51, 41, 53}; //evet
    int a3[] = {9, 0, 7, 6, 8, 5, 4, 3, 2, 7}; //hayir

    int min = a1[0];
    int max = a1[0];
    for (int i = 1; i < sizeof(a1); i++)
    {
        if (a1[i] > max)
            max = a1[i];

        if (a1[i] < min)
            min = a1[i];
    }
    if((max - min) == sizeof(a1))
        printf("a1 dizisinin ogeleri ardisik tamsayılardan olusuyor");
    else
        printf("a1 dizisinin ogeleri ardisik tamsayılardan olusmuyor");
	
	
	
	int min = a2[0];
    int max = a2[0];
    for (int i = 1; i < sizeof(a2); i++)
    {
        if (a2[i] > max)
            max = a2[i];

        if (a2[i] < min)
            min = a2[i];
    }
    if((max - min) == sizeof(a2))
        printf("a2 dizisinin ogeleri ardisik tamsayılardan olusuyor");
    else
        printf("a2 dizisinin ogeleri ardisik tamsayılardan olusmuyor");
	
	
	int min = a3[0];
    int max = a3[0];
    for (int i = 1; i < sizeof(a3); i++)
    {
        if (a3[i] > max)
            max = a3[i];

        if (a3[i] < min)
            min = a3[i];
    }
    if((max - min) == sizeof(a3))
        printf("a3 dizisinin ogeleri ardisik tamsayılardan olusuyor");
    else
        printf("a3 dizisinin ogeleri ardisik tamsayılardan olusmuyor");

}