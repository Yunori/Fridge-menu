/*
** my_swap.c for my_swap in /home/mages_i/piscine/C/jour_03/mages_i/my_swap
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Wed Oct  1 09:03:25 2014 MAGES Igor
** Last update Fri Oct  3 17:22:46 2014 MAGES Igor
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
