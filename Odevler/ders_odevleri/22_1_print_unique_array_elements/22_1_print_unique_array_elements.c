/*
 * Author: Fatih Han Caglayan
 * Exercise: 22. Ders 1. Odev print only unique elements of array
 *
 */

#include <stdio.h>
#include "futility.h"

#define		SIZE		20

int main()
{
    randomize();
	
	int a[SIZE];
	
	set_array_random_between_range(a, SIZE, 0, SIZE - 1);
	
	print_array(a, SIZE);

	int flag_array[20] = {0};
	
	for (int i = 0; i < SIZE; i++)
	{
		flag_array[a[i]]++;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if(flag_array[i] == 1)
			printf("%4d ", i);
	}
    printf("\n");
    // The complexity of the solution above is O(n), which is only possible, because we know that the
    // assigned values will be within a given range. Therefore, a flag array can be used.


    // However, if definition of another array is not allowed or the assigned values do not adhere
    // a certain range or the order is important then the following code with a nested loop should be
    // used which has a complexity of O(n^2)
    for (int i = 0; i < SIZE; i++)
    {
        int cnt = 0;
        for (int j = 0; j < SIZE; j++)
        {
            if(a[i] == a[j])
                cnt++;
        }
        if (cnt == 1)
            printf("%4d ", a[i]);
    }
}