#include <stdio.h>
#include <string.h>

int nClasse = 0;

struct Classe {
	char nom[100];
	int pv;
	int attaque;
	int vitesse;
};
typedef struct Classe classe;

int main(){
	
	classe guerrier ={ "guerrier", 200 , 10 , 5};
	classe mage ={ "mage", 100 , 15 , 8};
	classe assassin ={ "assassin", 120 , 13, 10};
	classe chasseur ={ "chasseur", 150 , 12 , 7};
	
	
	
	
	printf ("Quelle classe voulez vous jouer ?\n");
	printf ("Guerrier (1), Mage (2), Assassin (3), Chasseur (4) ?\n");
	scanf ("%d", nClasse);
	
	if ( nClasse == 1){
		printf ("Tres bien, vous jouerez donc %s\n", guerrier.nom );
	}
	
	if ( nClasse == 2){
		printf ("Tres bien, vous jouerez donc %s\n", mage.nom );
	}
	
	if ( nClasse == 3){
		printf ("Tres bien, vous jouerez donc %s\n", assassin.nom );
	}
	
	if ( nClasse == 4){
		printf ("Tres bien, vous jouerez donc %s\n", chasseur.nom );
	}
	
	
	
	
	
	
	return 0;
}