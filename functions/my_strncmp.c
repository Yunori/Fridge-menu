/*
** my_strncmp.c for my_strncmp in /home/mages_i/piscine/C/jour_04/mages_i/my_strncmp
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Thu Oct  2 13:48:14 2014 MAGES Igor
** Last update Fri Oct  3 17:28:14 2014 MAGES Igor
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  for (; n > 0; s1++, s2++, --n)
    if (*s1 != *s2)
      return ((*s1 > *s2) ? 1 : -1);
    else if (*s1 == '\0')
      return (0);
  return (0);
}
