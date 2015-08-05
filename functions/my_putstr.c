/*
** my_putstr.c for my_putstr in /home/mages_i/piscine/C/jour_02/mages_i/my_putstr
** 
** Made by MAGES Igor
** Login   <mages_i@etna-alternance.net>
** 
** Started on  Tue Sep 30 15:32:41 2014 MAGES Igor
** Last update Fri Oct  3 17:22:16 2014 MAGES Igor
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  for (i = 0; str[i] != '\0'; i++)
    my_putchar(str[i]);
}
