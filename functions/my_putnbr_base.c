/*
** my_putnbr_base.c for my_putnbr_base.c in /home/mages_i/piscine/C/jour_05/mages_i/my_putnbr_base
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Fri Oct  3 11:14:12 2014 MAGES Igor
** Last update Wed Oct  8 09:14:09 2014 MAGES Igor
*/

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
