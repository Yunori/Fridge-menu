/*
** my_put_nbr.c for my_put_nbr in /home/mages_i/piscine/C/libmy_01/mages_i
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Fri Oct  3 17:11:54 2014 MAGES Igor
** Last update Sat Oct  4 19:17:00 2014 MAGES Igor
*/

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
