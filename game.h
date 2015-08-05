/*
** game.h for Project in /home/etna/c/project/mages_i/
** 
** Made by MAGES Igor
** Login   <mqges_i@etna-alternance.net>
** 
** Started on  Sat Oct  4 01:20:16 2014 MAGES Igor
** Last update Sat Oct 11 12:39:17 2014 MAGES Igor
*/

#ifndef GAME_H_
# define GAME_H_
# include "my.h"




typedef struct		s_ingredients s_ingredients;
struct s_ingredients
{
  char			*name;
  int			qte;
  struct s_ingredients	*next;
};
typedef s_ingredients* t_ingredients;


typedef struct		s_recettes s_recettes;
struct s_recettes
{
  char			*name;
  char			*type;
  t_ingredients		*ingredients;
  struct s_recettes	*next;
};

typedef s_recettes* t_recettes;

s_ingredients		*ingredient;
s_recettes		*recette;

char	*readLine();
void	init();
void	add_ingredient(char *name, int num, int type);
int	search_ingredient(char *name, int num);
void	show_ingredients();
void	update_ingredients(char *name, char *qte);
t_ingredients	delete_ingredient(t_ingredients liste, char *name);
void	update_ingredients();
void	get_ingredients(char type);
void	get_infos(char* line, char type);
void	splash_screen();
void	start_game();
void	cuisiner();
void	update_qte();
void	game_over();
void	do_action(char *get);
void	read_user();
void	ingredients();
void	reset();
void	get_cuisine();
void	type_recette(FILE*fp, int current);
void	init_recette(FILE*fp, int current, int i);
void	nbr_ingredient(FILE*fp, int current);
void    get_type();
int	alea();
#endif
