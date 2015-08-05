/*
** my_strncpy.c for my_strncpy in /home/mages_i/piscine/C/jour_04/mages_i/my_strncpy
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Thu Oct  2 09:34:28 2014 MAGES Igor
** Last update Sat Oct  4 18:42:19 2014 MAGES Igor
*/

#include <stdio.h>

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  for (i = 0; i < n && src[i]; i++)
    dest[i] = src[i];
  for (; i < n; i++)
    dest[i] = '\0';
  return (dest);
}
