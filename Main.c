#include <stdio.h>
#include <string.h>

int choix = 0;
char nom[100];
int po = 0;
int dague = 0;
int rang = 1;

int main(){
// ------------------------------------------------------------------INRODUCTION ----------------------------------------------------------------------

	printf ("Vous faites partie d'un clan de mercenaire.\n");
	printf ("Ce dernier, meme s'il est repute pour faire le sale boulot,\n");
	printf ("peut aussi faire des petits services pour les villages voisins \n");
	printf ("Vous etes donc un mercenaire junior qui va devoir faire ses preuves pour rejoindre les grands du clan \n");
	printf ("Mais avant d'entrer dans cette aventure, quel est votre nom ?\n");
	printf ("\n");
	scanf ("%[^\n]",nom);
	printf ("\n");
	printf ("Tres bien %s, maintenant que les presentations sont faites, partons a l'aventure\n",nom);
	printf ("Si vous parvenez a passer au rang 5, vous parviendrez a rejoindre les mercenaires. \n");
	
	printf ("Vous avez %d pieces d'or sur vous\n", po);
	printf ("Vous etes au rang %d\n", rang);
	printf ("Dans quel village voulez vous commencer votre aventure?\n");
	printf ("\n");
	printf ("Run'ku est un village dans les montagnes a quelques jours de marche, (1)\n");
	printf ("Fun'hu est un village proche de le l'ocean, il y a beaucoup de pecheur la-bas, (2)\n");
	printf ("Ragdol est un village bien plus grand que les deux autres, on y retrouve tous les plus gros marches et contrats. (3)\n");
	printf ("\n");
	scanf ("%d",&choix);
	printf ("\n");
	
	
	
	// ------------------------------------------------------------------ RUN'KU ----------------------------------------------------------------------
	if ( choix == 1 ){
		choix =0;
		printf ("Vous partez donc en direction de Run'ku, vers les montagnes.\n");
		printf ("Pendant votre trajet, vous passez a cote d'un voyageur.\n");
		printf ("Il a l'air de vouloir vous aborder.\n");
		printf ("\n");
		printf ("Passer quand meme votre chemin (1)\n");
		printf ("S'arreter pour lui parler. (2)\n");
		printf ("\n");
		scanf ("%d",&choix);
		printf ("\n");
		if ( choix == 1 ){
			choix =0;
			printf ("Vous passer votre chemin en evitant son regard.\n");
			printf ("Vous arrivez au village de Run'fu.\n");
			printf ("\n");
		}
		
		if ( choix == 2 ){
			choix =0;
			printf ("Le voyageur vient vers vous.\n");
			printf ("C'est un vieux monsieur vetu d'une grande cape et d'une capuche.\n");
			printf ("Il s'approche de vous et vous dit:\n");
			printf ("J'ai aussi ete mercenaire junior et je sais a quel point c'est dur.\n");
			printf ("Tiens prend cette dague, elle pourra te sortir de mauvaise situation.\n");
			dague = 1;
			printf ("Vous prenez la dague et le voyageur part sans que vous ayez le temps de le remercier.\n");
			printf ("Vous etes intrigue mais vous continuez votre route.\n");
			printf ("Vous arrivez au village de Run'fu.\n");
			printf ("\n");
		}
		
		printf ("Une fois arrive au village, vous devez trouver des quetes a faire pour prouver votre valeur.\n");
		printf ("Vous savez qu'il y a toujours un panneau central au milieu du village qui affiche les services que les gens demandent.\n");
		printf ("Voulez vous vous y rendre (1) ou preferez vous vous ballader dans la ville? (2)\n");
		printf ("\n");
		scanf ("%d",&choix);
		printf ("\n");
		
		if ( choix == 1 ){
			choix =0;
			printf ("Vous vous rendez donc au centre du village\n");
			printf ("Vous regardez le panneau et vous remarquez qu'il y a 3 quetes\n");
			printf ("\n");
			printf ("La premiere parle d'aller chercher l'animal de companie d'une veille dame (1)\n");
			printf ("Cela vous rapportera 5 pieces d'or\n");
			printf ("La deuxieme demande de chasser un ours de sa caverne (2)\n");
			printf ("Cela vous rapportera 15 pieces d'or\n");
			printf ("La troisieme veut que vous recuperiez la tete d'un brigant qui est enfouit dans la foret(3)\n");
			printf ("Cela vous rapportera 20 pieces d'or\n");
			printf ("Laquelle voulez vous choisir ?\n");
			
			printf ("\n");
			scanf ("%d",&choix);
			printf ("\n");
			
			if ( choix == 1 ){
				choix =0;
				
			}
			
			if ( choix == 2 ){
				choix =0;
				
			}
			
			if ( choix == 3 ){
				choix =0;
				
			}
		}
		
		if ( choix == 2 ){
			choix =0;
			printf ("Vous décidez de vous ballader dans ville a la recherche de personnes a aider.\n");
			printf ("Au loin vous voyez un enfant se faire frapper par 3 adultes\n");
			printf ("\n");
			printf ("L'aider (1)\n");
			printf ("Continuer votre chemin (2)\n");
			printf ("\n");
			scanf ("%d",&choix);
			printf ("\n");
			
			if ( choix == 1 ){
			choix =0;
			
			}
			
			if ( choix == 2 ){
			choix =0;
			
			}
		}

		
	}
	
	
	// ------------------------------------------------------------------ FUN'HU ----------------------------------------------------------------------
	if ( choix == 2 ){
		printf ("Vous partez donc en direction de Fun'hu, vers l'ocean.\n");
	}
	
	
	
	// ------------------------------------------------------------------RAGDOL ----------------------------------------------------------------------
	if ( choix == 3 ){
		printf ("Vous partez donc en direction de Ragdol.\n");
	}

	
	return 0;
}