#include <unistd.h>

/*Ligne a modifier*/
int		pointeurs(void);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
/*Ligne a modifier*/
int		main(void)
{
	pointeurs();
	return (0);
}
