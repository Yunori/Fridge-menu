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
