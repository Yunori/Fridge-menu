/*
** my_strlen.c for my_strlen in /home/mages_i/piscine/C/jour_03/mages_i/my_strlen
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Wed Oct  1 09:33:17 2014 MAGES Igor
** Last update Fri Oct  3 17:23:32 2014 MAGES Igor
*/

int	my_strlen(char *str)
{
  return ((*str) ? 1 + my_strlen(++str) : 0);
}
