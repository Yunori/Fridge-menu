void	my_putchar(char c);
void	my_putstr(char *c);

void	my_put_nbr(int n)
{
  if (n == -2147483648)
    {
      my_putstr("-2147483648");
    }
  else
    {
      if (n < 0)
	{
	  n = -n;
	  my_putchar('-');
	}
      if (n < 10)
	my_putchar(n + 48);
      else
	{
	  my_put_nbr(n / 10);
	  my_put_nbr(n % 10);
	}
    }
}
