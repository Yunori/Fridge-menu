/*
** my_strdup.c for my_strdup in /home/mages_i/piscine/C/jour07/mages_i/my_strdup
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Mon Oct  6 09:37:52 2014 MAGES Igor
** Last update Mon Oct  6 13:33:41 2014 MAGES Igor
*/

#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  int   len;
  char      *copy;

  len = my_strlen(str) + 1;
  if (!(copy = malloc(len)))
    return (NULL);
  if (str < copy)
    for (str += len, copy += len; len; --len)
      *--copy = *--str;
  else if (str != copy)
    for (; len; --len)
      *copy++ = *str++;
  return (copy);
}
