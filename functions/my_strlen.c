int	my_strlen(char *str)
{
  return ((*str) ? 1 + my_strlen(++str) : 0);
}
