#include <stdio.h>
#include <stdlib.h>

void menu () ;

int valeur () ;

int main () 
{
	int nombre;

	do
	{
		menu();
		nombre = valeur();
		
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
			printf("Fermeture du programe\n");
		}
		else
		{
			printf("Erreur ! Veuillez entrer un chiffre valide (0-3).\n");
		}

	}
		
	while (nombre != 0);
	
	
	
	
	return 0;
}


void menu ()
{
	printf("Pour afficher l'addresse IP, veuillez tapez 1.\n");
	printf("Pour afficher la table de routage, veuillez tapez 2.\n");
	printf("Pour afficher la connectivité avec Google, veuillez tapez 3.\n");
	printf("Pour quitter le menu, veuillez tapez 0.\n");
}

int valeur ()
{
	int x;
		printf("Veuillez entrez un nombre: ");	
		scanf("%d", &x);
	return x;
}
