/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** task04 test_my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, rev_negative_characters)
{
    char str[6] = "Hello";    
    cr_assert_str_eq(my_revstr(str), "olleH");
}
