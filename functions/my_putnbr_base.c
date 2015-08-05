void	my_putchar(char c);

int	my_strlen(char *str);

int	my_putnbr_base(int nbr, char *base)
{
  int   re;
  int   d;
  int   len;

  len = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -1 * nbr;
    }
  for (d = 1; (nbr / d) >= len; d = d * len);
  for (; d > 0; re = (nbr / d) % len, my_putchar(base[re]), d = d / len);
  return (re);
}
