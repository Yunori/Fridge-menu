char	*my_strncat(char *str1, char *str2, int n)
{
  char	*save;
  for (save = str1; *str1 && str1++;);
  for (; n; *str1++ = *str2++, n--);
  *str1 = 0;
  return (save);
}
