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
