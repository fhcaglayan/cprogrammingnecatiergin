/*
 * Author: Fatih Han Caglayan
 *
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "futility.h"

int max2(int x, int y)
{
	return x > y ? x : y;
}


int max3(int x, int y, int z) 
{
	int max = x;
	
	if(y > max)
		max = y;
	
	if(z > max)
		max = z;
	
	return max;
}


/*
int max3(int x, int y, int z) 
{
	return max2(max2(a, b), c));
}
*/


int max4(int a, int b, int c, int d) 
{
	return max2(max2(a, b), max2(c, d));
}


int min2(int a, int b)
{
	return a < b ? a : b;
}


int min3(int a, int b, int c)
{
	return min2(min2(a, b), c);
}


int median3(int a, int b, int c)
{	
	if((a <= b && b <= c) || (c <= b && b <= a))
		return b;
	else if((b <= a && a <= c) || ((c <= a && a <= b)))
		return a;
	
	return c;
}


int day_of_year(int day, int month, int year) {
    int sum = day;

    switch (month - 1) {
        case 11: sum += 30;
        case 10: sum += 31;
        case 9: sum += 30;
        case 8: sum += 31;
        case 7: sum += 31;
        case 6: sum += 30;
        case 5: sum += 31;
        case 4: sum += 30;
        case 3: sum += 31;
        case 2: sum += isleap(year) ? 29 : 28;
        case 1: sum +=  31;
    }

    return sum;
}


int are_friends(int number1, int number2)
{
    int sum1 = 0, sum2 = 0;

    for(int i = 1; 2 * i <= number1; i++)
        if(number1 % i == 0)
            sum1 += i;

    for(int i = 1; 2 * i <= number2; i++)
        if(number2 % i == 0)
            sum2 += i;

    return sum1 == number2 && sum2 == number1;
}

int isprime(int x)
{
    if(x == 1)
        return 0;

    if(x % 2 == 0)
        return x == 2;

    if(x % 3 == 0)
        return x == 3;

    if(x % 5 == 0)
        return x == 5;

    for(int i = 7; i * i <= x; i++)
        if(x % i == 0)
            return 0;
    return 1;
}


int closest_prime(int x)
{
    for(int i = x - 1; i > 0; i--)
        if(isprime(i))
            return i;
    return -1; // code should not get here
}


int is_superprime(int x)
{
    if(!isprime(x))
        return 0;

    int cnt = 0;
    for(int i = 2; i <= x; i++)
        if(isprime(i))
            cnt++;

    return isprime(cnt);
}


int get_digit(int val, int n)
{
    n--;
    while(n--)
        val /= 10;

    return val % 10;
}


int get_number_of_digits(int x)
{
    if(x == 0)
        return 1;

    int cnt = 0;

    while(x)
    {
        x /= 10;
        cnt++;
    }

    return cnt;
}

/* // eski kodum
int get_sum_of_digits(int x)
{
    int sum = 0;
    int digit_num = get_number_of_digits(x);

    for(int i = 1; i <= digit_num; i++)
    {
        sum += get_digit(x, i);
    }

    return sum;
}
 */


int get_sum_of_digits(int x)
{
    int sum = 0;

    while(x)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

/* // eski kodum
int get_digital_root(int x)
{
    int result = get_sum_of_digits(x);

    while(get_number_of_digits(result) > 1)
        result = get_sum_of_digits(result);

    return result;
}
 */

int get_digital_root(int x)
{
    while((x = get_sum_of_digits(x)) >= 10)
        ; // null statement

    return x;
}

unsigned int display_collatz(unsigned long long x)
{
    unsigned cnt = 1;

    while(x != 1) {
        printf("%llu ", x);
        cnt++;

        if (x % 2 == 0)
            x /= 2;
        else
            x = 3 * x + 1;
    }

    printf("1");
    return cnt;
}

/* // eski kodum
unsigned int display_collatz(unsigned long long x)
{
    unsigned cnt = 1;

    while(1) {
        printf("%llu ", x);
        cnt++;

        if(x == 1)
            break;

        if (x % 2 == 0)
            x /= 2;
        else
            x = 3 * x + 1;
    }
    return cnt;
}
*/

int factorial(int x)
{
    int result = 1;

    while(x > 1)
        result *= x--;

    return result;
}

int get_sum_of_factorial_digits(int x)
{
    int sum = 0;

    while(x)
    {
        sum += factorial(x % 10);
        x /= 10;
    }

    return sum;
}

int is_factorian(int x)
{
    return x == get_sum_of_factorial_digits(x);
}

int is_harshad(int val)
{
    return val % get_sum_of_digits(val) == 0;
}

int is_smith(int val)
{
    int original_val = val;

    int sum_of_digits_val = get_sum_of_digits(val);
    int sum_of_digits_factors = 0;

    if(val <= 1)
        return 0;

    // for efficiency purposes
    while(val % 2 == 0) {
        sum_of_digits_factors += get_sum_of_digits(2);
        val /= 2;
    }

    // val is odd at this point, so start from 3 and increase by 2
    for (int i = 3; i * i <= val; i += 2) {
        while(val % i == 0) {
            sum_of_digits_factors += get_sum_of_digits(i);
            val /= i;
        }
    }
    if(val == original_val)
        return 0; // prime numbers like 2, 3, 5 etc. do not count as smith numbers

    if(val != 1)
        sum_of_digits_factors += get_sum_of_digits(val); // add last prime if left

    return sum_of_digits_val == sum_of_digits_factors;
}


void print_ramanujan_numbers(int num)
{
    int n = 1;
    while(n <= num)
    {
        int cnt = 0;
        for (int i = 1; i * i * i <= n; i++)
            for (int j = i + 1; j * j * j <= n; j++)
                if(i * i * i + j * j * j == n)
                    cnt++;

        if(cnt >= 2)
            printf("%d ", n);

        n++;
    }
}


void set_array_random(int* p, int size)
{
	for (int i = 0; i < size; i++)
		p[i] = rand() % 1000;
}

// sets an array with random numbers starting from range_start up to and including range_end
void set_array_random_between_range(int* p, int size, int range_start, int range_end)
{
	for (int i = 0; i < size; i++)
		p[i] = rand() % (range_end - range_start + 1) + range_start;
}


void print_array(const int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i && i % 20 == 0)
			printf("\n");
		printf("%4d ", p[i]);
	}
    printf("\n");
}


void swap(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void clear_input_buffer(void)
{
    int c;
    while((c = getchar()) != '\n' && c != EOF)
        ; // null statement
}

void sgets(char* p)
{
    int c;
    while((c = getchar()) != '\n' && c != EOF)
    {
        *p++ = (char) c;
    }
    *p = '\0';
}

int is_palindrome(const char* p)
{
    int len;
    for (len = 0; *(p+len) != '\0'; len++)
        ; // null statement

    int i = 0;
    len--;
    while (i < len)
    {
        if (toupper(*(p + i)) != toupper(*(p + len)))
            break;

        while (!isalpha(*(p + ++i)))
            ; // null statement

        while (!isalpha(*(p + --len)))
            ; // null statement
    }

    return i >= len;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void reverse_two_words_with_shift_by_one(char* p)
{
    int idx_space;

    int len = 0;
    while (*(p + len++) != '\0')
    {
        if (*(p + len) == ' ')
            idx_space = len;
    }

    int len_second_part = len - idx_space - 1; // this includes the null character

    // shift right one by one
    for (int i = 0; i < len_second_part; i++)
    {
        char temp = *(p + len - 1);
        for (int j = len - 1; j >= 0; j--)
        {
            *(p + j) = *(p + j - 1);
        }
        *p = temp;
    }
    *(p + len_second_part - 1) = ' ';
    *(p + len - 1) = '\0';
}

void reverse_two_words(char* p)
{
    int idx_space;

    int len = 0;
    while (*(p + len++) != '\0')
    {
        if (*(p + len) == ' ')
            idx_space = len;
    }

    // use joggling algorithm to move array by len_second_part
    int len_second_part = len - idx_space - 1; // this includes the null character
    int number_of_sets = gcd(len, len_second_part);
    int setsize = len / number_of_sets;
    for (int i = 0; i < number_of_sets; i++) {
        char temp = *(p + i);

        for (int j = 0; j < setsize - 1; j++)
        {
            int index1 = (i - j * len_second_part);
            int index2 = (i - (j + 1) * len_second_part);

            while (index1 < 0)
                index1 += len;
            while (index2 < 0)
                index2 += len;

             *(p + index1) = *(p + index2);
        }
        *(p + i + len_second_part) = temp;
    }
    *(p + len_second_part - 1) = ' ';
    *(p + len - 1) = '\0';
}

int is_anagram(const char* p1, const char* p2)
{
    int cnt_letters1[ALPHABET_SIZE] = {0};
    int cnt_letters2[ALPHABET_SIZE] = {0};

    for (int i = 0; *(p1 + i) != '\0'; i++)
    {
        if(isalpha(*(p1 + i)))
        {
            cnt_letters1[toupper(*(p1 + i)) - 'A']++;
        }
    }

    for (int i = 0; *(p2 + i) != '\0'; i++)
    {
        if(isalpha(*(p2 + i)))
        {
            cnt_letters2[toupper(*(p2 + i)) - 'A']++;
        }
    }

    int letter;
    for (letter = 0; letter < ALPHABET_SIZE; letter++)
    {
        if (cnt_letters1[letter] != cnt_letters2[letter])
        {
            break;
        }
    }

    return letter == ALPHABET_SIZE;
}

int alphabetic_compare(const void* a, const void* b)
{
    return *(char*)a - *(char*)b;
}

int is_anagram_with_sort(char* p1, char* p2)
{
    int len1;
    for (len1 = 0; *(p1 + len1) != '\0'; len1++)
        ; // null statement

    int len2;
    for (len2 = 0; *(p2 + len2) != '\0'; len2++)
        ; // null statement

    if (len1 != len2)
        return 0;

    qsort(p1, len1, sizeof(char), alphabetic_compare);
    qsort(p2, len2, sizeof(char), alphabetic_compare);

    int i;
    for (i = 0; *(p1 + i) == *(p2 + i) && i < len1; i++)
        ; // null statement

    return i == len1;
}


int is_all_chars_unique(char* p)
{
    int a[256] = {0};

    while(*p)
        ++a[*p++];

    for (int i = 0; i < asize(a); i++)
        if (a[i] > 1)
            return 0;

    return 1;
}


int is_all_chars_unique2(char* p)
{
    for (int i = 0; i <strlen(p); i++)
    {
        int cnt = 0;
        for (int j = 0; j < strlen(p); j++)
        {
            if (p[i] == p[j])
                cnt++;
        }
        if (cnt > 1)
            return 0;
    }
    return 1;
}



int sum_array(const int* p, int size)
{
	int sum = 0;
	
	while (size--)
		sum += *p++;
	
	return sum;
}


double get_mean(const int* p, int size)
{
	return (double)sum_array(p, size) / size;
}

double get_std_dev(const int* p, int size)
{
	double mean = get_mean(p, size);
	double sum_square = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum_square += (p[i] - mean) * (p[i] - mean);
	}
	
	return sqrt(sum_square / size);
}

void reverse_array(int* p, int size)
{
	for (int i = 0; i < size / 2; i++)
		swap(p + i, p + size - i - 1);
}

int get_min_value_array(const int* p, int size)
{
	int min = p[0];
	
	for (int i = 1; i < size; i++)
	{
		if (p[i] < min)
		{
			min = p[i];
		}
	}
	return min;
}

int get_max_value_array(const int* p, int size)
{
	int max = p[0];
	
	for (int i = 1; i < size; i++)
	{
		if (p[i] > max)
		{
			max = p[i];
		}
	}
	return max;
}


void get_min_max_array(const int* p, int size, int* pmin, int* pmax)
{
	*pmin = *pmax = *p;
	
	for (int i = 1; i < size; i++)
	{
		if (p[i] > *pmax)
			*pmax = p[i];
		else if (p[i] < *pmin)
			*pmin = p[i];
	}
}


void copy_array(int* pdest, const int* psource, int size)
{
	while (size--)
		*pdest++ = *psource++;
}


void reverse_copy_array(int* pdest, const int* psource, int size)
{
	psource += size;
	
	while (size--)
		*pdest++ = *--psource;
}


void bubble_sort_array(int* p, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int k = 0; k < size - 1 - i; k++)
		{
			if (p[k] > p[k + 1])
			{
				swap(p + k, p + k + 1);
			}
		}
	}
}


int* get_min_array(const int* p, int size)
{
	const int* pmin = p;
	
	for (int i = 1; i < size; i++)
	{
		if(p[i] < *pmin)
		{
			pmin = p + i;
		}
	}
	return (int*)(pmin);
}


int* get_max_array(const int* p, int size)
{
	const int* pmax = p;
	
	for (int i = 1; i < size; i++)
	{
		if(p[i] > *pmax)
		{
			pmax = p + i;
		}
	}
	return (int*)(pmax);	
}


void selection_sort_array(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		swap(p + i, get_min_array(p + i, size - i));
	}
}

char* mystrstr(const char* str, const char* substr)
{
    while (*str)
    {
        if(*str == *substr)
        {
            int i;
            for (i = 0; substr[i] && str[i] == substr[i]; i++)
                ; // null statement

            if(!substr[i])
            {
                return str;
            }
        }
        str++;
    }
    return NULL;
}