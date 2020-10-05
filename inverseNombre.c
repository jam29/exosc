
#include <stdio.h>

/* ALGO
on se limite à 3 chiffres et on ne teste pas le nbre de chiffres
on va simplement executer de manière procédurale pour un nombre entier positif à 3 chiffres
on a pas encore vu les boucles.
Attention ce sont des entiers donc une division et un modulo renvoient des entiers (même si le résultat donne un float)

0) Déclarer 3 entiers a,b,c
1) Saisir la valeur de a dans l'espace mémoire à l'adresse mémoire de la variable a (ex: a=345)
2) copier la valeur de a dans c
3) calculer b est egale à (a modulo 10) * 100	 => 5 * 100  = 500
4) a = a divisé par 10 => 34 
5) b = b + ( a modulo 10 ) * 10 =>  b = 500 + ( 4 ) * 10 => b = 540
6) a = a divisé par 10 => 3  
7) b = b + a => b = 543
8) affiche inverse de c est b 

*/
int main() {
	int a,b,c; 
	printf("donnez un entier de 3 chiffres \n"); 
	scanf("%d",&a); 
	c=a; 
	b=(a % 10) * 100;

	a = a / 10;
	b = b + ( a % 10 ) * 10;

	a /= 10;  
	b += a;   

	printf("le nombre %d inverse est %d \n",c,b);
}

