int	my_strncmp(char *s1, char *s2, int n)
{
  for (; n > 0; s1++, s2++, --n)
    if (*s1 != *s2)
      return ((*s1 > *s2) ? 1 : -1);
    else if (*s1 == '\0')
      return (0);
  return (0);
}
