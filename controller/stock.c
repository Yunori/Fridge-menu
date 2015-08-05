#include "../game.h"


void	ingredients()
{
	show_ingredients();
	read_user();
}

void	update_qte() {
  char	*name, *s_qte;
  my_putstr("    Quel ingredient voulez vous changer/ajouter ?\n    > ");
  name = readLine();
  my_putstr("    Combien y a t'il de ");
  my_putstr(name);
  my_putstr(" dans votre frigo ?\n    > ");
  s_qte = readLine();
  update_ingredients(name, s_qte);
  show_ingredients();
  read_user();
}
