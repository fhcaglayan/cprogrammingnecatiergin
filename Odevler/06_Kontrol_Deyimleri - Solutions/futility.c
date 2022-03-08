#include <stdio.h>
#include <math.h>

#define isleap(y) ((y) % 4 == 0 && (y) % 100 != 0 || (y) % 400 == 0)


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

unsigned long long factorial(int x)
{
    unsigned long long result = 1;

    while(x > 1)
        result *= x--;

    return result;
}

unsigned long long get_sum_of_factorial_digits(unsigned long long x)
{
    unsigned long long sum = 0ULL;

    while(x)
    {
        sum += factorial(x % 10);
        x /= 10;
    }

    return sum;
}

int is_factorian(unsigned long long x)
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
        return 0; // prime numbers like 2, 3, 5 etc do not count as smith numbers

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