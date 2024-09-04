#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int i,j,k,y=0;
	char Titre[100][100];
	char Auteur[100][100];
	float Prix[100];
	int Quantite[100];
	int a,b,d;
	int quantite_totale=0;
	




while (i!=7){
printf("\n que voulez vous faire?\n");
printf("0. Quittez\n");
printf("1. Ajouter un livre au stock\n");
printf("2. Afficher tous les livres disponibles\n");
printf("3. Mettre à jour la quantité d'un livre.\n");
printf("4. Supprimer un livre du stock.\n");
printf("5. Afficher le nombre total de livres en stock.\n");

scanf("%d",&i);
switch (i) {
	
	case 0:
		exit(0);
	
	case 1:
		printf("Veuillez saisir le titre du livre ");
		scanf("%99s", Titre[j]);
		printf("Veuillez saisir le nom de l'auteur du livre ");
		scanf("%99s", Auteur[j]);
		printf("Veuillez saisir le prix du livre ");
		scanf("%f", &Prix[j]);
		printf("Veuillez saisir la Quantite en stock du livre ");
		scanf("%d", &Quantite[j]);
		j++;
		break;
	case 2:
		 for (k = 0; k < j; k++) {
            printf("Titre: %s, Auteur: %s, Prix: %f, Quantité: %d\n", 
                   Titre[k], Auteur[k], Prix[k], Quantite[k]);
            printf("\n");
        }
		break;
	case 3:
		int z; 
		int indice;
		char Titre_a_chercher[100];
		printf("Veuillez saisir le titre du livre ");
		scanf("%99s", Titre_a_chercher);
		printf("Veuillez saisir la nouvelle quantite ");
		scanf("%d",&z);
		for (y=0;y<j;y++)
		{
			if (strcmp(Titre[y],Titre_a_chercher)==0)
			{
				indice = y;
			}
		}
		Quantite[indice] = z;
		break;
	case 4:
		char Livre_a_supprimer[100];
		int index;
		int c;
			printf("Veuillez saisir le titre du livre ");
			scanf("%99s", Livre_a_supprimer);
				for (c=0;c<j;c++)
		{
			if (strcmp(Titre[c],Livre_a_supprimer)==0)
			{
				index = c;
			}
		}
 
 
for (a=index;a<j-1;a++)
{
    strcpy(Titre[a], Titre[a+1]);
    strcpy(Auteur[a], Auteur[a+1]);
    Prix[a]=Prix[a+1];
    Quantite[a]=Quantite[a+1];
}
    j--;
		break;
	
	case 5:
		for (d=0;d<j;d++)
		{
			quantite_totale += Quantite[d];
		}
		
		printf("Le nombre total des livres en stock est: %d\n",quantite_totale);
		break;

		
		
}}}
