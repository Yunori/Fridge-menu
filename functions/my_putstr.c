void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  for (i = 0; str[i] != '\0'; i++)
    my_putchar(str[i]);
}
