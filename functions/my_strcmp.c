/*
** my_strcmp.c for my_strcmp in /home/mages_i/piscine/C/jour_04/mages_i/my_strcmp
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Thu Oct  2 11:31:33 2014 MAGES Igor
** Last update Fri Oct  3 17:27:49 2014 MAGES Igor
*/

int	my_strcmp(char *s1, char *s2)
{
  for (; *s1 == *s2; s1++, s2++)
    if (*s1 == '\0')
      return (0);
  return ((*s1 > *s2) ? 1 : -1);
}
