/*
** my_strstr.c for my_strstr in /home/mages_i/piscine/C/jour_04/mages_i
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Thu Oct  2 19:38:55 2014 MAGES Igor
** Last update Sat Oct  4 19:22:52 2014 MAGES Igor
*/

#include <stdio.h>

int	my_strncmp(char *s1, char *s2, int n);

int	my_strlen(char *str);

char	*my_strstr(char *str, char *to_find)
{
  char c;
  size_t len;

  c = *to_find++;
  if (!c)
    return (char *) str;// Trivial empty string case

  len = my_strlen(to_find);
  do {
    char sc;

    do {
      sc = *str++;
      if (!sc)
	return "null";
    } while (sc != c);
  } while (my_strncmp(str, to_find, len) != 0);

  return (str - 1);

  /*
  if (!my_strlen(str))
    return ("null");
  for (i = 0; str[i] != '\0'; i++)
    if (str[i] == to_find[0])
      if (my_strncmp(&str[i], to_find, my_strlen(to_find)))
	return (&str[i]);
  return ("null");
  */
}
