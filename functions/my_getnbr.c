/*
** my_getnbr.c for my_getnbr in /home/mages_i/piscine/C/jour_03/mages_i/my_getnbr
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Wed Oct  1 09:54:06 2014 MAGES Igor
** Last update Fri Oct  3 17:24:33 2014 MAGES Igor
*/

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
