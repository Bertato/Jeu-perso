#include <stdio.h>
#include <string.h>

int choix = 0;
char nom[100];
int po = 0;
int dague = 0;
int rang = 1;
int teteBrigant = 0;
int aiderEnfant =0;
int oursTue = 0;

int mort (){
	printf ("Vous vous etes surestime et vous etes malheureusement mort\n");
	printf ("peut etre ferez vous de meilleurs choix dans une autre vie.\n");
}

int rangUp (){
	printf ("Bravo vous avez augmente votre rang\n");
	rang = rang + 1;
	printf ("Vous etes desormais rang %d\n", rang);
}

int main(){
// ------------------------------------------------------------------INRODUCTION ----------------------------------------------------------------------

	printf ("Vous faites partie d'un clan de mercenaires.\n");
	printf ("Ce dernier, meme s'il est repute pour faire le sale boulot,\n");
	printf ("peut aussi faire des petits services pour les villages voisins \n");
	printf ("Vous etes donc un mercenaire junior qui va devoir faire ses preuves pour rejoindre les grands du clan \n");
	printf ("Mais avant d'entrer dans cette aventure, quel est votre nom ?\n");
	printf ("\n");
	scanf ("%[^\n]",nom);
	printf ("\n");
	printf ("Tres bien %s, maintenant que les presentations sont faites, partons a l'aventure\n",nom);
	printf ("Si vous parvenez a passer au rang 5, vous parviendrez a rejoindre les mercenaires. \n");
	
	printf ("Vous avez %d pieces d'or sur vous\n",&po);
	printf ("Vous etes au rang %d\n", &rang);
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
		printf ("S'y rendre(1)\n"); 
		printf ("Se balader dans la ville(2)\n");
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
				printf("Vous vous rendez en direction de la riviere car c'est la qu'il a ete apercu la derniere fois\n");
				printf("Une fois sur les lieux, vous apercevez des traces de pas qui ont l'air quand meme tres grosse\n");
				printf("Vous suivez les traces\n");
				printf("Cela vous amene face a un tigre qui doit faire 2 fois votre taille\n");
				printf("A votre vu l'animal se rue sur vous\n");
				printf("Vous defendre (1)\n");
				printf("Vous echapper (2) \n");
				printf ("\n");
				scanf ("%d",&choix);
				printf ("\n");
				
				if ( choix == 1 && dague == 1){
					choix =0;
					printf("Le tigre vous saute dessus et vous le poignardez juste avant qu'il ne vous dévore\n");
					printf("Malheureusement quelqu'un vous a vu et va voir la veille dame pour tout lui raconter\n");
					printf("Votre reputation est salie, vous ne serez jamais un mercenaire.\n");
				}
				
				if ( choix == 1 && dague == 0){
					choix =0;
					printf("Le tigre vous saute dessus et vous dévore\n");
					mort();
				}
				if ( choix == 2 ){
					choix =0;
					printf ("Malheureusement les tigres ont une vitesse de pointe de 65km/h");
					printf("Le tigre vous saute dessus et vous dévore\n");
					mort();
					printf("Au moins vous aurez appris la vitesse de pointe d'un tigre.\n");
				}
			}
			
			if ( choix == 2 ){
				choix =0;
				printf("Vous vous rendez dans les montagnes en direction de la caverne de l'ours.\n");
				printf("A votre arrive, l'ours dort\n");
				printf("Le tuer dans son sommeil (1)\n");
				printf("Lui faire peur pour le faire fuire (2)\n");
				printf ("\n");
				scanf ("%d",&choix);
				printf ("\n");
				
				if ( choix == 1 && dague == 0 ){
				choix =0;
				printf("Vous arrivez a tuer des ours a mains nus vous ?\n");
				printf("L'ours brun est un animal pouvant atteindre 600kg\n");
				mort();
				printf("Au moins vous aurez appris le poids d'un ours brun.\n");
				}
				
				if ( choix == 1 && dague == 1 ){
				choix =0;
				printf("Vous vous approchez discretement de l'animal et lui plantez votre dague dans la tete\n");
				printf("Quel courage !\n");
				rangUp();
				oursTue = 1;
				}
				
				if ( choix == 2 ){
				choix =0;
				printf("Vous poussez un crier bestial pour faire peur a l'animal endormi\n");
				printf("L'ours est effraye et encore a moitie endormie\n");
				printf("Malheureusement pour vous quand un animal a peur, il se defend souvent\n");
				printf("L'animal vous attaque et vous terasse\n");
				mort();
				
				}
			}
			
			if ( choix == 3 ){
				choix =0;
				printf ("Vous decidez de vous rendre dans la foret\n");
				printf ("Des que vous mettez un pied dans la foret, une dizaine de brigants vous tombe dessus\n");
				printf ("malheureusement vous n'avez pas la force pour les vaincre\n");
				mort();
				
			}
					
			if ( choix == 1 && rang>3){
				choix =0;
				printf ("Vous decidez de vous rendre dans la foret\n");
				printf ("Des que vous mettez un pied dans la foret, une dizaine de brigants vous tombe dessus\n");
				printf ("Grace a vos experience passe, vous arrivez a gerer la situation\n");
				printf ("Une fois que vous avez terrase tous les ennemis, vous remarquez que l'un des brigants est mieux vetu que les autres\n");
				printf ("Ca doit etre le chef\n");
				printf ("Voulez vous lui couper la tete ? \n");
				printf ("Prendre la tete (1)\n");
				printf ("Laisser la tete (2)\n");
				printf ("\n");
				scanf ("%d",&choix);
				printf ("\n");
				if ( choix == 1 ){
					choix =0;
					printf ("Vous lui coupez la tete et la ramenez au village\n");
					teteBrigant = 1;
					rangUp();
				}
				
				if ( choix == 2 ){
					choix =0;
					printf ("Vous laissez le chef des brigants mort et rentrez au village\n");
					rangUp();
				}
			}
		}
		
		if ( choix == 2 ){
			choix =0;
			printf ("Vous decidez de vous balader dans ville a la recherche de personnes a aider.\n");
			printf ("Au loin vous voyez un enfant se faire frapper par 3 adultes\n");
			printf ("\n");
			printf ("L'aider (1)\n");
			printf ("Continuer votre chemin (2)\n");
			printf ("\n");
			scanf ("%d",&choix);
			printf ("\n");
			
			if ( choix == 1 ){
			choix =0;
			printf ("Vous vous approchez en criant pour arreter les agresseurs\n");
			printf ("En vous voyant arriver, ils decident de s'en prendre a vous.\n");
			aiderEnfant = 1;
				if ( dague == 0 ){
					printf ("Vous vous engagez dans un combat qui semble complexe\n");
					printf ("Pendant que vous tenez 2 des agresseurs, le troisieme vous frappe a la tete et vous assomme\n");
					mort();
				}
				
				if ( dague == 1 ){
					printf ("Vous vous engagez dans un combat qui semble complexe\n");
					printf ("Vous parvenez a couper au bras un des agresseurs grace a votre dague\n");
					printf ("Les agresseurs sentent qu'ils ne feront pas le poids et décide de s'enfuire.\n");
					printf ("\n");
					printf ("Les poursuivre (1)\n");
					printf ("Rester aupres de l'enfant (2)\n");
					printf ("\n");
					scanf ("%d",&choix);
					printf ("\n");
					
					if ( choix == 1 ){
						choix =0;
						printf ("Vous commencez a les poursuivre\n");
						printf ("L'enfant vous remercie pendant que vous partez\n");
						printf ("Vous arrivez devant la foret et les 3 agresseurs s'y enfoncent sans hesiter.\n");
						printf ("Des que vous mettez un pied dans la foret, une dizaine de brigants vous tombe dessus\n");
						printf ("malheureusement vous n'avez pas la force pour les vaincre\n");
						mort();
						
					}
					
					if ( choix == 1 && rang>3){
						choix =0;
						printf ("Vous commencez a les poursuivre\n");
						printf ("L'enfant vous remercie pendant que vous partez\n");
						printf ("Vous arrivez devant la foret et les 3 agresseurs s'y enfoncent sans hesiter.\n");
						printf ("Des que vous mettez un pied dans la foret, une dizaine de brigants vous tombe dessus\n");
						printf ("Grace a vos experience passe, vous arrivez a gerer la situation\n");
						printf ("Une fois que vous avez terrase tous les ennemis, vous remarquez que l'un des brigants est mieux vetu que les autres\n");
						printf ("Ca doit etre le chef\n");
						printf ("Voulez vous lui couper la tete ? peut etre qu'il y avait une prime sur lui.\n");
						printf ("Prendre la tete (1)\n");
						printf ("Laisser la tete (2)\n");
						printf ("\n");
						scanf ("%d",&choix);
						printf ("\n");
						if ( choix == 1 ){
							choix =0;
							printf ("Vous lui coupez la tete et la ramenez au village\n");
							teteBrigant = 1;
							rangUp();
						}
						
						if ( choix == 2 ){
							choix =0;
							printf ("Vous laissez le chef des brigants mort et rentrez au village\n");
						}
					}
					
					if ( choix == 2 ){
						choix =0;
						printf ("Vous restez aupres de l'enfant pendant que les 3 agresseurs s'en vont au loin en direction de la foret.\n");
						printf ("Vous apprenez que l'enfant est le fils du marchant du village et qu'il vous fera de grosses reductions si vous y allez\n");
						printf ("L'enfant s'en va retrouver ses parents en vous remerciant.\n");
						
					}
				}
			
			}
			
			if ( choix == 2 ){
			choix =0;
			printf ("L'enfant se fait massacrer sous vos yeux\n");
			printf ("Il laisse le corps du garcon sur le sol et partent en courant\n");
			printf ("Les poursuivre (1)\n");
			printf ("Les laisser (2)\n");
			printf ("\n");
			scanf ("%d",&choix);
			printf ("\n");
			
				if ( choix == 1 ){
						choix =0;
						printf ("Vous commencez a les poursuivre\n");
						printf ("Vous arrivez devant la foret et les 3 agresseurs s'y enfoncent sans hesiter.\n");
						printf ("Des que vous mettez un pied dans la foret, une dizaine de brigants vous tombe dessus\n");
						printf ("malheureusement vous n'avez pas la force pour les vaincre\n");
						mort();
						
					}
					
				if ( choix == 1 && rang>3){
					choix =0;
					printf ("Vous commencez a les poursuivre\n");
					printf ("Vous arrivez devant la foret et les 3 agresseurs s'y enfoncent sans hesiter.\n");
					printf ("Des que vous mettez un pied dans la foret, une dizaine de brigants vous tombe dessus\n");
					printf ("Grace a vos experience passe, vous arrivez a gerer la situation\n");
					printf ("Une fois que vous avez terrase tous les ennemis, vous remarquez que l'un des brigants est mieux vetu que les autres\n");
					printf ("Ca doit etre le chef\n");
					printf ("Voulez vous lui couper la tete ? peut etre qu'il y avait une prime sur lui.\n");
					printf ("Prendre la tete (1)\n");
					printf ("Laisser la tete (2)\n");
					printf ("\n");
					scanf ("%d",&choix);
					printf ("\n");
					if ( choix == 1 ){
						choix =0;
						printf ("Vous lui coupez la tete et la ramenez au village\n");
						teteBrigant = 1;
						rangUp();
					}
					
					if ( choix == 2 ){
						choix =0;
						printf ("Vous laissez le chef des brigants mort et rentrez au village\n");
					}
						
					if ( choix == 2 ){
						choix =0;
						printf ("Vous les laissez partir\n");
						printf ("Vous vous remettez en question après avoir vu se meurtre\n");
						printf ("Vous n'avez pas bouge\n");
						printf ("Vous n'etes visiblement pas pres pour l'aventure et la realite vous reviens en pleine vigure\n");
						printf ("Peut etre que la prochaine fois vous ferez de meilleurs choix\n");
					}
				}
			}

		
		}
	printf ("Vous etes de retour en ville\n");
	if ( teteBrigant == 1){
		printf ("vous etes accueillis par le chef du village\n");
		printf ("Vous lui montrez la tete du brigant\n");
		printf ("Le chef saute de joie et vous donne les 20 pieces d'or\n");
		teteBrigant = 0;
		po = po +20;
		printf ("Vous avez %d pieces d'or sur vous\n",&po);
	}
	
	if ( oursTue == 1){
		printf ("vous etes accueillis par le chef du village\n");
		printf ("Vous lui annoncez que l'ours n'embetera plus le village\n");
		printf ("Le chef saute de joie et vous donne les 15 pieces d'or\n");
		po = po +15;
		printf ("Vous avez %d pieces d'or sur vous\n",&po);
	}
	printf ("Aller au centre ville a l'endroit des quetes (1)\n");
	printf ("Aller voir le marchant (2)\n");
	printf ("Partir de cette ville pour aller a une autre (3)\n");
	printf ("\n");
	scanf ("%d",&choix);
	printf ("\n");
	
	if ( choix == 1 ){
		choix =0;
		printf ("Vous vous rendez donc au centre ville vers le panneau des quetes\n");

	}
	
	if ( choix == 2 ){
		choix =0;
		printf ("Vous laissez le chef des brigants mort et rentrez au village\n");
	}
		
	if ( choix == 3 ){
		choix =0;
		printf ("Vous les laissez partir\n");
		printf ("Vous vous remettez en question après avoir vu se meurtre\n");
		printf ("Vous n'avez pas bouge\n");
		printf ("Vous n'etes visiblement pas pres pour l'aventure et la realite vous reviens en pleine vigure\n");
		printf ("Peut etre que la prochaine fois vous ferez de meilleurs choix\n");
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