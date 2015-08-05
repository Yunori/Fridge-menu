/*
** my_aff_tab.c for my_aff_tab in /home/mages_i/piscine/C/jour_02/mages_i/my_aff_tab
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Tue Sep 30 09:06:59 2014 MAGES Igor
** Last update Fri Oct  3 17:25:29 2014 MAGES Igor
*/

void    my_putchar(char c);
void	my_put_nbr(int n);

void	my_aff_tab(int tab[], int len)
{
  int	compteur;

  for (compteur = 0; compteur < len; compteur++)
    {
      my_put_nbr(tab[compteur]);
      my_putchar('\n');
    }
}
