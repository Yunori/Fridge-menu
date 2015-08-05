int	my_getnbr(char *str)
{
  int	neg;
  int	result;

  for (neg = 1; *str < '0' || *str > '9'; str++)
    neg = (*str == '-') ? -1 : 1;
  for (result = 0; *str >= '0' && *str <= '9'; ++str)
    result = (result * 10) + (*str - '0');
  return (result * neg);
}
