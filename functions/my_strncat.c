/*
** my_strncat.c for my_strncat in /home/mages_i/piscine/C/jour_04/mages_i/my_strncat
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Thu Oct  2 14:27:18 2014 MAGES Igor
** Last update Fri Oct  3 17:30:12 2014 MAGES Igor
*/

char	*my_strncat(char *str1, char *str2, int n)
{
  char	*save;
  for (save = str1; *str1 && str1++;);
  for (; n; *str1++ = *str2++, n--);
  *str1 = 0;
  return (save);
}
