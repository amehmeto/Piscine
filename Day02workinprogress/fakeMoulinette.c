#include <unistd.h>

/*Ligne a modifier*/
void	ft_is_negative(void);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

/*Ligne 15 a modifie*/
int		main(void)
{
	ft_is_negative();
	return (0);
}
