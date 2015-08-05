/*
** my_strcpy.c for my_strcpy in /home/mages_i/piscine/C/jour_04/mages_i/my_strcpy
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Thu Oct  2 09:13:34 2014 MAGES Igor
** Last update Fri Oct  3 17:26:48 2014 MAGES Igor
*/

char	*my_strcpy(char *dest, char *src)
{
  char	*adrr;

  for (adrr = dest; *src; *dest++ = *src++);
  *dest++ = '\0';
  return (adrr);
}
