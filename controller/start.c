#include "../game.h"

void	init()
{
  my_putstr("\e[0;31m     Veuillez selectionner le type de remplissage\n");
  my_putstr("     1) Random (etape 1)\n");
  my_putstr("     2) Fichier (etape 4)\n\e[0m");
  get_type();
  splash_screen();
}

void	get_type()
{
  char *get;
  get = readLine();
  if(my_strcmp(get, "1") == 0 || my_strcmp(get, "2") == 0)
    get_ingredients(get[0]);
  else
    init();
}

void	read_user()
{
  char	*get;
  
  my_putstr("\n\n\e[0;31m");
  my_putstr("     Bienvenue dans l'interface de Chappie\n");
  my_putstr("     1) Voir le stock\n");
  my_putstr("     2) Cuisiner\n");
  my_putstr("     3) Mettre a jour les ingredients\n");
  my_putstr("     4) Quitter\n\n");
  my_putstr("     \e[0m");
  my_putstr("\n\n     Choisir une option : ");
  get = readLine();
  my_putstr("\n");
  do_action(get);
}

void	do_action(char *get)
{
  int   poss[4] = {'1', '2', '3', '4'};
  void (*func[4])() = {ingredients, cuisiner, update_qte, game_over};
  int x;
  int find;

  find = -1;
  for(x=0; x<4; x++)
    if(get[0] == poss[x])
      find = x;
  if(find != -1)
    (*func[find])();
  else if(find == -1)
    read_user();
}

void	game_over()
{
  my_putstr("\n     Powered bertoc_t\n\n\n\n\n");
  my_putstr("\e[0m");
  exit(0);
}

void start_game()
{
  read_user();
}
