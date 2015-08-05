/*
** main.c for Project in /home/etna/c/project/mages_i/
** 
** Made by MAGES Igor
** Login   <mqges_i@etna-alternance.net>
** 
** Started on  Sat Oct  4 01:20:16 2014 MAGES Igor
** Last update Sat Oct 11 12:39:17 2014 MAGES Igor
*/

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
