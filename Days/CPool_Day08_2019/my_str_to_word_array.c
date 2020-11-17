/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** task04 my_str_to_word_array splits a string in words and returns an array of the words
*/

char **my_str_to_word_array(char const *str)
{
    int nb = 0;
    char *new_str;
    
    while (str[nb] != '\0') {
        if (str[nb] >= 'a' && str[nb] <= 'z' || str[nb] >= 'A' && str[nb] <= 'Z')
            nb = nb + 1;
        else if (str[nb] >= '0' && str[nb] <= '9')
            nb = nb + 1;
        else
            word = word + 1;
    }
    return (new_str);
}



