#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	my_len(char *str);

int	my_word(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  if (c >= 'A' && c <= 'Z')
    return (1);
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int    my_len(char *str)
{
  int    i;

  for (i = 0; str[i] && my_word(str[i]); i++);
  return (i);
}

int	count_word(char *str)
{
  int	i;
  int	j;

  for (i = 0, j = 0; str[i] != 0; i++)
      if (my_word(str[i]))
        j++;
  return (i + 1);
}

char	**my_str_to_wordtab(char *str)
{
  char	**result;
  int	i;
  int	j;
  int	c;

  if (str == NULL)
    return (NULL);
  if ((result = malloc(sizeof(*result) * (count_word(str) + 1))) == NULL)
      return (NULL);
  for (i = -1, c = 0; ++i < count_word(str);)
    {
      while (!my_word(str[c]))
	c++;
      if ((result[i] = malloc(my_len(&str[c]) + 1)) == NULL)
	return (NULL);
      j = -1;
      for (; my_word(str[c]) && str[c] != 0 && str[c] != '\n'; c++)
	result[i][++j] = str[c];
      result[i][j + 1] = '\0';
    }
  result[i] = NULL;
  return (result);
}
