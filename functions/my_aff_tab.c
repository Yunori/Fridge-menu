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
