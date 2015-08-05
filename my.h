/*
** my.h for Project in /home/etna/c/project/mages_i/
** 
** Made by MAGES Igor
** Login   <mqges_i@etna-alternance.net>
** 
** Started on  Sat Oct  4 01:20:16 2014 MAGES Igor
** Last update Sat Oct 11 12:39:17 2014 MAGES Igor
*/

#ifndef MY_H_
# define MY_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

void	my_putchar(char c);
int	my_isneg(int n);
int	my_put_nbr(int nb);
void	my_swap(int *a, int *b);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
void	my_aff_tab(int tab[], int len);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strcat(char *str1, char *str2);
char	*my_strncat(char *str1, char *str2, int n);
char	*my_strstr(char *str, char *to_find);
#endif
