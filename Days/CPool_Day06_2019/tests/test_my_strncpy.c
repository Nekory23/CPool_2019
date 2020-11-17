/*
** EPITECH PROJECT, 2019
** test_my_strncpy.c
** File description:
** 
*/

#include <criterion/criterion.h>

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, copy_under_zero_characters_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", -5);
    cr_assert_str_eq(dest, "");
}

Test(my_strncpy, copy_twenty_five_characters_in_empty_array)
{
    char dest[26] = {0};

    my_strncpy(dest, "HelloWorld", 25);
    cr_assert_str_eq(dest, "HelloWorld");
}
