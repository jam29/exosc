//Auteur Benoit Cavarec
//exercices de programmation en langage C, boucles de répétition




#include <stdio.h>
#include <stdlib.h>

#define BASE 10
#define NB 10
#define ESP printf("\n");

int MOHA () { 


	int ligne, colonne,
		multi;

		// printf("V%d\n", );
			ESP;
	printf("La table de multiplication de 1 a 20 :\n");
	ESP;

	for(ligne=0;ligne<=10;ligne++){         // affichage de la première ligne
		if(ligne<10)                        //imbrication d'un if pour n'avoir qu'un seul 0 avant le 10
		printf(" 00%d ", ligne);
			else
				printf(" 0%d ", ligne);
	}
	ESP;									//constante ESP pour aérer le tableau

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

int main()

{

	MOHA();
	// const int N_MIN=5,
	// 		N_MAX=25,
	// 		LE_PAS=2,
	// 		N2_MIN=70,
	// 		N2_MAX=100,
	// 		LE_PAS2=5;
	// int i, n, k, ligne, colonne,
	// 	multi,
	// 	nombre=20;
	// char x;

	// for (i = N_MIN; i <= N_MAX; i+=LE_PAS)
	// 	printf("%3d", i);
	// 	ESP;
	// 	ESP;

	// for (i = N2_MAX; i>=N2_MIN; i-=LE_PAS2)
	// 	printf("%3d", i);
	// 	ESP;
	// 	ESP;

	// for (x='A'; x<='Z'; x++)
	// 	printf("%c", x);
	// 	ESP;
	// 	ESP;

	// for (x='A'; x<='Z'; x++)
	// 	if (x != 'A' && x!= 'E'&& x != 'I' && x!= 'O' && x != 'U' && x!= 'Y')
	// 		printf("%c", x);
	// 	ESP;
	// 	ESP;

	// printf("Les diviseurs de 20 sont :");
	// for (k = 1; k <= nombre; k++)
	// 	if (nombre % k == 0)
	// 		printf("%3d", k);
	// 	ESP;
	// 	ESP;

	// printf("La table de multiplication de 1 a 20 :\n");
	// ESP;



	// for(ligne=0;ligne<=10;ligne++){         // affichage de la première ligne
	// 	if(ligne<10)                        //imbrication d'un if pour n'avoir qu'un seul 0 avant le 10
	// 	printf(" 00%d ", ligne);
	// 		else
	// 			printf(" 0%d ", ligne);
	// }
	// ESP;									//constante ESP pour aérer le tableau

	// for(ligne=1;ligne<=20;ligne++){         //affichage de la deuxième ligne
	// 	ESP;
	// 	if(ligne<10)                        //imbrication d'un if pour n'avoir qu'un seul 0 avant le 10
	// 	printf(" 00%d ", ligne);
	// 		else
	// 			printf(" 0%d ", ligne);
		
		
	// 		for(colonne=1;colonne<=10;colonne++){			//imbrication du for pour afficher la première ligne de
	// 			multi=colonne*ligne;                        //la table de multiplication suite a la première valeur
	// 			                                            //de la colonne
	// 			if(multi<10)
	// 				printf(" 00%d ", multi);
	// 				else if (multi<100)
	// 					printf(" 0%d ", multi);
	// 					else
	// 						printf(" %d ", multi);


	// 		}	
	// 	ESP;                                                //Le RC se fait a la fin des boucles for imbriquées
	// }                                                       //pour incrémenter "ligne" et afficher la ligne suivante. 

	return 0;
}