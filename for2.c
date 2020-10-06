// boucles de repetition

#include <stdio.h>
#include <stdlib.h>

#define BASE 10
#define NB 10
#define ESP printf("\n");

int main() {

	int ligne, colonne,
		multi;

	ESP;
	printf("La table de multiplication de 1 a 20 :\n");
	ESP;

	for(ligne=0;ligne<=10;ligne++){             // affichage de la première ligne
		if(ligne<10)                        // imbrication d'un if pour n'avoir qu'un seul 0 avant le 10
		printf(" 00%d ", ligne);
			else
				printf(" 0%d ", ligne);
	}
	ESP;	//constante ESP pour aérer le tableau

	for(ligne=1;ligne<=20;ligne++){         //affichage de la deuxième ligne
		ESP;
		if(ligne<10)                        //imbrication d'un if pour n'avoir qu'un seul 0 avant le 10
		printf(" 00%d ", ligne);
			else
				printf(" 0%d ", ligne);
				
			for(colonne=1;colonne<=10;colonne++){			//imbrication du for pour afficher la première ligne de
				multi=colonne*ligne;                        //la table de multiplication suite a la première valeur
				                                            //de la colonne
				if(multi<10)
					printf(" 00%d ", multi);
					else if (multi<100)
						printf(" 0%d ", multi);
						else
							printf(" %d ", multi);
			}	
		ESP;                                                //Le RC se fait a la fin des boucles for imbriquées
	}                                                       //pour incrémenter "ligne" et afficher la ligne suivante. 
	return 0;
}
