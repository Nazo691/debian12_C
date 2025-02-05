#include <stdio.h>
#include <stdlib.h>

void menu () ;

int valeur (int x) ;

int main () 
{
	int nombre;

	menu();

	do
	{
		valeur(nombre);
		
		if (nombre > 0 && nombre < 4)
		{
			if (nombre==1)
			{
				system("ip a");
			}
			
			else if (nombre==2)
			{
				system("ip route");
			}

			else if (nombre==3)
			{
				system("ping -c 4 8.8.8.8");
			}

		else if (nombre == 0)
		{
			system("-");
		}

		}

	}
		
	
	while (nombre != 0);
	{
		printf("Erreur !, veuillez entrez un des chiffres qui s'affiche sur le menu");
	}
	
	return 0;
}


void menu ()
{
	printf("Pour afficher l'addresse IP, veuillez tapez 1.\n");
	printf("Pour afficher la table de routage, veuillez tapez 2.\n");
	printf("Pour afficher la connectivité avec Google, veuillez tapez 3.\n");
	printf("Pour quitter le menu, veuillez tapez 0.\n");
}

int valeur (int x)
{
	printf("Veuillez entre le nombre souhaité: ");
	scanf("%i",&x);
}
