/* TEST */

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		tab[10];
	tab[0] = 42;
	tab[1] = 84;

	printf("Mon adresse est %p\n", tab);
	printf("La valeur de la cellule 1 est %d\n", tab[0]);
	printf("La valeur de la cellule 2 est %d\n", tab[1]);
}
