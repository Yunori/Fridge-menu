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

void add_ingredient(char *name, int num, int type)
{
  long	qte;
  s_ingredients* new = malloc(sizeof(s_ingredients));
  int z;

  z = -1;
  if(type == '2')
    z = search_ingredient(name, num);
  if(z != -1)
    num = num + z;
  ingredient = delete_ingredient(ingredient, name);
  new->name = name;
  new->qte = num;
  new->next = ingredient;
  ingredient = new;
}

int search_ingredient(char *name, int num)
{
  s_ingredients *tmp = ingredient;
  int nbr;
  nbr = -1;

  while(tmp != NULL)
    {
      if(my_strcmp(tmp->name, name) == 0)
	{
	  nbr = tmp->qte;
	  tmp->qte = nbr + num;
	}
      tmp = tmp->next;
    }
  return nbr;
}

void show_ingredients()
{
  s_ingredients *tmp = ingredient;
  
  my_putstr("\n\n\t\t\t====Ingrédients ====\n\n");
  while(tmp != NULL)
    {
      my_putstr("\t");
      my_putstr(tmp->name);
      my_putstr(" \t\t            ");
      my_put_nbr(tmp->qte);
      my_putstr("\n");
      tmp = tmp->next;
    }
  my_putstr("\n\n\n\n");
}

void update_ingredients(char *name, char *qte)
{
  int num;
  char *convert;

  ingredient = delete_ingredient(ingredient, name);
  num = strtol(qte, &convert, 10);
  add_ingredient(name, num, 1);
}

t_ingredients delete_ingredient(t_ingredients liste, char *name)
{
    if(liste == NULL)
        return (NULL);
 
    if(my_strcmp(liste->name, name) == 0)
    {
        s_ingredients *tmp = liste->next;
        free(liste);
        tmp = delete_ingredient(tmp, name);
        return (tmp);
    }
    else
    {
        liste->next = delete_ingredient(liste->next, name);
        return (liste);
    }
}
