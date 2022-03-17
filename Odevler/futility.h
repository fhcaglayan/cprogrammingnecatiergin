/*
 * Author: Fatih Han Caglayan
 *
 */

#ifndef MAX3_H
#define MAX3_H

#include <stdlib.h>
#include <time.h>

#define		asize(a)		(sizeof(a) / sizeof(*a))
#define		randomize()		(srand((unsigned)time(0)))
#define     isleap(y)       ((y) % 4 == 0 && (y) % 100 != 0 || (y) % 400 == 0)
#define     ALPHABET_SIZE   26


int max2(int, int);
int max3(int, int, int);
int max4(int, int, int, int);
int min2(int, int);
int min3(int, int, int);
int median3(int, int, int);
int isprime(int);
int day_of_year(int day, int month, int year);
int get_digit(int val, int n);
int get_number_of_digits(int);
int get_sum_of_digits(int);

int are_friends(int number1, int number2);
int closest_prime(int);
int is_superprime(int);
int get_digital_root(int);
unsigned int display_collatz(unsigned long long);
int factorial(int);
int is_factorian(int);
int is_harshad(int);
int is_smith(int);
void print_ramanujan_numbers(int);

void set_array_random(int* p, int size);
void set_array_random_between_range(int* p, int size, int range_start, int range_end);
void print_array(const int* p, int size);
void swap(int* p1, int* p2);

void clear_input_buffer(void);
void sgets(char* p);
int is_palindrome(const char* p);
void reverse_two_words_with_shift_by_one(char* p);
void reverse_two_words(char* p);
int is_anagram(const char* p1, const char* p2);
int is_anagram_with_sort(char* p1, char* p2);
int is_all_chars_unique(char* p);
int is_all_chars_unique2(char* p);


int sum_array(const int* p, int size);
double get_mean(const int* p, int size);
double get_std_dev(const int* p, int size);
void reverse_array(int* p, int size);
int get_min_value_array(const int* p, int size);
int get_max_value_array(const int* p, int size);
void get_min_max_array(const int* p, int size, int* pmin, int* pmax);
void copy_array(int* pdest, const int* psource, int size);
void reverse_copy_array(int* pdest, const int* psource, int size);
void bubble_sort_array(int* p, int size);


int* get_min_array(const int* p, int size);
int* get_max_array(const int* p, int size);
void selection_sort_array(int* p, int size);

char* mystrstr(const char* str, const char* substr);

#endif