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


void recettes(FILE *fp)
{
  int   current = fgetc(fp);

  while(!feof(fp))
    {
      if(current == ';')
        {
	  nbr_ingredient(fp, current);
	  current = fgetc(fp);
	}
      my_putchar(current);
      current = fgetc(fp);
      if(current == '\n')
	{
	  current = fgetc(fp);
	  break;
	}
    }
}

void nbr_ingredient(FILE*fp, int current)
{
  if(current == ';')
    {
      current = fgetc(fp);
      my_putstr(" \e[0;31m");
      while(current != '\n'  && !feof(fp))
	{
	  my_putchar(current);
	  current = fgetc(fp);
	}
      my_putstr(" \e[0;0m");
      my_putchar(current);
    }
}

void get_cuisine()
{
  FILE	*fp = fopen("./assets/recettes.txt", "r");
  int	current = fgetc(fp);
  int   x;
  int i;
  
  i = 1;
  while (!feof(fp))
    {
      init_recette(fp, current, i);
      i++;
      recettes(fp);
      current = fgetc(fp);
    }
}

void init_recette(FILE*fp, int current, int i)
{
  my_putstr("\n\n\t");
  my_put_nbr(i);
  my_putstr(")   ");
  while (current != '\n' && !feof(fp))
    {
      my_putchar(current);
      current = fgetc(fp);
      if(current == ';')
	{
	  type_recette(fp, current);
	  current = '\n';
	}
    }
}

void type_recette(FILE*fp, int current)
{
  current = fgetc(fp);
  my_putstr("    [");
  while(current != '\n'  && !feof(fp))
    {
      my_putchar(current);
      current = fgetc(fp);
    }
  my_putstr("] ");
  my_putchar(current);
}

void cuisiner()
{
  my_putstr("\t\t|============================|\n\t\t|");
  my_putstr("    INTERFACE DE CUISINE    ");
  my_putstr("|\n\t\t|============================|\n\n\n");
  my_putstr("\tRecettes :\n\n");
  get_cuisine();
  read_user();
}
