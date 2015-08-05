/*
** my_putchar.c for my_putchar in /home/mages_i/piscine/C/libmy_01/mages_i
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Fri Oct  3 17:04:37 2014 MAGES Igor
** Last update Sat Oct  4 18:11:08 2014 MAGES Igor
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
