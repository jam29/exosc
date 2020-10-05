#include<stdio.h>

int main() {
	char lettre;
	printf("Donnez une lettre entre 'a' et 'y' ou entre 'A' et 'Y': \n");
	scanf("%c",&lettre);
	lettre++; /* ???? operateur ++ sur une lettre ???? WTF */
	printf("La lettre suivante est: %c. \n",lettre);
	return 0;
}
