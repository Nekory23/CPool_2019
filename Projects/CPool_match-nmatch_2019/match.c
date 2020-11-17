/*
** EPITECH PROJECT, 2019
** CPool_match-nmatch_2019
** File description:
** match : find out if 2 strings match
*/

int match(char const *s1, char const *s2)
{
    int nbr_s1 = 0;
    int nbr_s2 = 0;
    int corres = 1;

    while (s1[nbr_s1] != '\0') {
        if (s2[nbr_s2] == '*')
            nbr_s2 = nbr_s2 + 1;
            if (s1[nbr_s1] == s2[nbr_s2]) {
                nbr_s1 = nbr_s1 + 1;
                nbr_s2 = nbr_s2 + 1;
            } else {
                nbr_s1 = nbr_s1 + 1;
                nbr_s2 = nbr_s2 - 1;
            }
            if (s1[nbr_s1] == '\0') {
                corres = 0;
                return (corres);
            }
        if (s1[nbr_s1] == s2[nbr_s2]) {
            nbr_s1 = nbr_s1 + 1;
            nbr_s2 = nbr_s2 + 1;
            if (s1[nbr_s1] == '\0' && s2[nbr_s2] == '\0') {
                return (corres);
            }
        }
    }
}
