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

void get_infos(char* line, char type)
{
	int i;
	int c;
	char *name;
	char *s_qte;
	char *convert;
	int num;

    for (i = 0, c = 0; i < my_strlen(line) && line[i] != ';'; i++)
    {
	    name = realloc(name, c+1*sizeof(int));
	    name[c++] = line[i];
    }
    for (c = 0, i++; i < my_strlen(line); i++)
    {
	    s_qte = realloc(s_qte, c+1*sizeof(int));
	    s_qte[c++] = line[i];
    }
    if(type == '1')
      num = alea();
    if(type == '2')
      num = strtol(s_qte, &convert, 10);
    add_ingredient(name, num, type);
}

void	get_ingredients(char type)
{
  FILE	*fp = fopen("./assets/ingredients.txt", "r");
  char line[1024];
  time_t t;

  srand((unsigned) time(&t));
  while (fgets(line, 1024, fp))
    {
      get_infos(line, type);
    }
}
