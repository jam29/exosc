#include<stdio.h>

int main() {

int a,b,tmp;
printf("Entrez deux entiers a et b: \n");
scanf("%d%d",&a,&b);
printf("Avant permutation: a = %d et b = %d. \n",a,b); tmp=a; a=b; b=tmp; printf("Apres permutation: a = %d et b = %d. \n",a,b); 
}
