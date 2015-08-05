/*
** readline.c for Battleship in /home/mages_i/piscine/C/Battleship/mages_i/my_battleship
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Sat Oct  4 10:29:00 2014 MAGES Igor
** Last update Fri Nov 14 16:16:20 2014 MAGES Igor
*/

/*
  Cette fonction permet de récuper une ligne
  de moins de 50 caractères sur l'entrée standard.
  La fonction ne prend pas de paramètre et renvoit une chaîne
  allouée (pensez a free()).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

char	*readLine()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
