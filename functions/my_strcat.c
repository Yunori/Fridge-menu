/*
** my_strcat.c for my_strcat in /home/mages_i/piscine/C/jour_04/mages_i/my_strcat
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Thu Oct  2 15:30:41 2014 MAGES Igor
** Last update Fri Oct  3 19:44:07 2014 MAGES Igor
*/

char	*my_strcat(char *str1, char *str2)
{
  char	*save;
  for (save = str1; *str1 && str1++; );
  while (*str2)
    { 
      *str1 = *str2;
      str1++;
      str2++;
    }
  *str1 = 0;
  return (save);
}
