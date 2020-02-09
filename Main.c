#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Personnage
int choix = 0;
char nom[100];
int po = 0;
int rang = 1;


// Objets
int arme = 0;
int vetementsAssassin = 0;
int potion =0;


//Quetes
int teteBrigant = 0;
int aiderEnfant =0;
int oursTue = 0;

//Marchant
char objMarchant[5][100] = {"shurikens a 10po (1)", "vetements d'assassin a 30po(2)", "dague a 10po(3)", "potion de la deuxieme chance a 100po(4)", "partir (5)"};
char objMarchantReduc[5][100] = {"shurikens a 5po (1)", "vetements d'assassin a 15po(2)", "dague a 5po(3)", "potion de la deuxieme chance a 50po(4)", "partir (5)"};


int shop (){
	printf ("Vous allez donc voir le marchant du village\n");
	printf ("Bonjour voyageur, que desirez vous?\n");
	
	//-----------------Enfant pas sauvé-----------------
	if (aiderEnfant ==0){
		printf ("Je peux vous vendre des objets\n");
		printf ("Que voulez vous acheter?\n");
		for (int i=0; i<5;i++){
			printf ("%s\n",objMarchant[i]);
		}
		printf ("Vous avez %d pieces d'or sur vous\n", po);
		printf ("\n");
		scanf ("%d",&choix);
		printf ("\n");
	
		if (choix == 1 && po>=10){
			choix =0;
			arme = 1;
			po = po-10;
			printf ("Il vous reste %d pieces d'or sur vous\n", po);
			printf ("Vous avez achete des shurikens\n");
			printf ("Ils vous seront utile pour le combat a distance\n");
			choix = 5;
		}
	
		if (choix == 2 && po>=30){
			choix =0;
			vetementsAssassin = 1;
			po = po-30;
			printf ("Il vous reste %d pieces d'or sur vous\n", po);
			printf ("Vous avez achete des vetements d'assassin\n");
			printf ("Ils vous seront utile pour passer incognito\n");
			choix = 5;
			
		}
		if (choix == 3 && po>=10){
			choix =0;
			arme = 1;
			po = po-10;
			printf ("Il vous reste %d pieces d'or sur vous\n", po);
			printf ("Vous avez achete une dague\n");
			printf ("Elle vous sera utile en cas d'attaque\n");
			choix = 5;
		}
	
		if (choix == 4 && po>=100){
			choix =0;
			potion = 1;
			po = po-100;
			printf ("Il vous reste %d pieces d'or sur vous\n", po);
			printf ("Vous avez achete une potion de la deuxieme chance\n");
			printf ("Elle vous sera utile si vous faite un mauvais choix\n");
			choix = 5;
			
		}
	
		else{
			choix =0;
			printf ("Vous n'avez pas assez d'argent, vous avez %d pieces d'or \n", po);
			choix = 5;
		}
		
		if (choix == 5){
			choix =0;
			printf ("Vous partez de chez le marchant et retourne a l'entree de la ville\n");
			
		}
	}

	//-----------------Enfant sauvé-----------------
	if (aiderEnfant ==1){
		printf ("Oh mais c'est vous qui avez sauve mon fils ! Merci infiniment\n");
		printf ("Pour cela je reduis le prix de tous mes articles de moitie !\n");
		printf ("Que voulez vous acheter?\n");
		for (int i=0; i<5;i++){
			printf ("%s\n",objMarchantReduc[i]);
		}
		printf ("Vous avez %d pieces d'or sur vous\n", po);
		printf ("\n");
		scanf ("%d",&choix);
		printf ("\n");
	
		if (choix == 1 && po>=5){
			choix =0;
			arme = 1;
			po = po-5;
			printf ("Il vous reste %d pieces d'or sur vous\n", po);
			printf ("Vous avez achete des shurikens\n");
			printf ("Ils vous seront utile pour le combat a distance\n");
		}
		
		if (choix == 2 && po>=15){
			choix =0;
			vetementsAssassin = 1;
			po = po-15;
			printf ("Il vous reste %d pieces d'or sur vous\n", po);
			printf ("Vous avez achete des vetements d'assassin\n");
			printf ("Ils vous seront utile pour passer incognito\n");
			
		}
		if (choix == 3 && po>=5){
			choix =0;
			arme = 1;
			po = po-5;
			printf ("Il vous reste %d pieces d'or sur vous\n", po);
			printf ("Vous avez achete une dague\n");
			printf ("Elle vous sera utile en cas d'attaque\n");
		}
	
		if (choix == 4 && po>=50){
			choix =0;
			potion = 1;
			po = po-50;
			printf ("Il vous reste %d pieces d'or sur vous\n", po);
			printf ("Vous avez achete une potion de la deuxieme chance\n");
			printf ("Elle vous sera utile si vous faite un mauvais choix\n");
			
		}
	
		if (choix == 5){
			choix =0;
			printf ("Vous partez de chez le marchant et retourne a l'entree de la ville\n", po);
			
		}
	
		else{
			choix =0;
			printf ("Vous n'avez pas assez d'argent, vous avez %d pieces d'or \n", po);
		}
	}
}

int mort (){
	printf ("Vous vous etes surestime et vous etes malheureusement mort\n");
	printf ("peut etre ferez vous de meilleurs choix dans une autre vie.\n");
	exit(0);
}

int rangUp (){
	printf ("Bravo vous avez augmente votre rang\n");
	rang = rang + 1;
	printf ("Vous etes desormais rang %d\n", rang);
	if (rang == 5){
		printf ("Félicitation !!\n");
		printf ("Vous avez attein le rang 5, vous pouvez desormais rejoindre les mercenaires\n");
		printf ("La prochaine etape sera de monter les grades au sein des mercenaires.\n");
		printf ("Merci d'avoir joue !\n");
		exit (0);
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
int voyager(){
	printf ("Dans quel village voulez vous continuer votre aventure?\n");
	printf ("\n");
	printf ("Run'ku est un village dans les montagnes a quelques jours de marche, (1)\n");
	printf ("Fun'hu est un village proche de le l'ocean, il y a beaucoup de pecheur la-bas, (2)\n");
	printf ("Ragdol est un village bien plus grand que les deux autres, on y retrouve tous les plus gros marches et contrats. (3)\n");
	printf ("\n");
	scanf ("%d",&choix);
	printf ("\n");
	
	
}



// quetes Run'Ku
int queteAnimalCompagnie (){
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
	
	if ( choix == 1 && arme == 1){
		choix =0;
		printf("Le tigre vous saute dessus et vous le poignardez juste avant qu'il ne vous dévore\n");
		printf("Malheureusement quelqu'un vous a vu et va voir la veille dame pour tout lui raconter\n");
		printf("Votre reputation est salie, vous ne serez jamais un mercenaire.\n");
	}
	
	if ( choix == 1 && arme == 0){
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

int queteOurs(){
	printf("Vous vous rendez dans les montagnes en direction de la caverne de l'ours.\n");
	printf("A votre arrive, l'ours dort\n");
	printf("Le tuer dans son sommeil (1)\n");
	printf("Lui faire peur pour le faire fuire (2)\n");
	printf ("\n");
	scanf ("%d",&choix);
	printf ("\n");
	
	if ( choix == 1 && arme == 0 ){
		choix =0;
		printf("Vous arrivez a tuer des ours a mains nus vous ?\n");
		printf("L'ours brun est un animal pouvant atteindre 600kg\n");
		mort();
		printf("Au moins vous aurez appris le poids d'un ours brun.\n");
	}
	
	if ( choix == 1 && arme == 1 ){
		choix =0;
		printf("Vous vous approchez discretement de l'animal et lui plantez votre arme dans la tete\n");
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

int teteBrigantsMoins(){
	printf ("Vous decidez de vous rendre dans la foret\n");
	printf ("Des que vous mettez un pied dans la foret, une dizaine de brigants vous tombe dessus\n");
	printf ("malheureusement vous n'avez pas la force pour les vaincre\n");
	mort();
}

int teteBrigantsPlus(){
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
	
	printf ("Vous avez %d pieces d'or sur vous\n",po);
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
		
		//-----------------Eviter le voyageur-----------------
		if ( choix == 1 ){
			choix =0;
			printf ("Vous passer votre chemin en evitant son regard.\n");
			printf ("Vous arrivez au village de Run'fu.\n");
			printf ("\n");
		}
		//-----------------Parler au voyageur -----------------
		if ( choix == 2 ){
			choix =0;
			printf ("Le voyageur vient vers vous.\n");
			printf ("C'est un vieux monsieur vetu d'une grande cape et d'une capuche.\n");
			printf ("Il s'approche de vous et vous dit:\n");
			printf ("J'ai aussi ete mercenaire junior et je sais a quel point c'est dur.\n");
			printf ("Tiens prend cette dague, elle pourra te sortir de mauvaise situation.\n");
			arme = 1;
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
		
		//-----------------Centre ville-----------------
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
			
			//-----------------Animal de compagnie-----------------
			if ( choix == 1 ){
				choix =0;
				queteAnimalCompagnie();
			}
			
			//-----------------Ours-----------------
			if ( choix == 2 ){
				choix =0;
				queteOurs();
				
			}
			
			//-----------------Brigants-----------------
			if ( choix == 3 && rang<2){
				choix =0;
				teteBrigantsMoins ();
				
			}
					
			if ( choix == 1 && rang>=2){
				choix =0;
				teteBrigantsPlus();
			}
		}
		
		//-----------------Balade-----------------
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
			
			//-----------------Enfant sauvé-----------------
			if ( choix == 1 ){
			choix =0;
			printf ("Vous vous approchez en criant pour arreter les agresseurs\n");
			printf ("En vous voyant arriver, ils decident de s'en prendre a vous.\n");
			aiderEnfant = 1;
				if ( arme == 0 ){
					printf ("Vous vous engagez dans un combat qui semble complexe\n");
					printf ("Pendant que vous tenez 2 des agresseurs, le troisieme vous frappe a la tete et vous assomme\n");
					mort();
				}
				
				if ( arme == 1 ){
					printf ("Vous vous engagez dans un combat qui semble complexe\n");
					printf ("Vous parvenez a couper au bras un des agresseurs grace a votre arme\n");
					printf ("Les agresseurs sentent qu'ils ne feront pas le poids et decide de s'enfuire.\n");
					printf ("\n");
					printf ("Les poursuivre (1)\n");
					printf ("Rester aupres de l'enfant (2)\n");
					printf ("\n");
					scanf ("%d",&choix);
					printf ("\n");
					
					if ( choix == 1  && rang<2){
						choix =0;
						printf ("Vous commencez a les poursuivre\n");
						printf ("L'enfant vous remercie pendant que vous partez\n");
						teteBrigantsMoins();
						
					}
					
					if ( choix == 1 && rang>=2){
						choix =0;
						printf ("Vous commencez a les poursuivre\n");
						printf ("L'enfant vous remercie pendant que vous partez\n");
						teteBrigantsPlus();
					}
					
					if ( choix == 2 ){
						choix =0;
						printf ("Vous restez aupres de l'enfant pendant que les 3 agresseurs s'en vont au loin en direction de la foret.\n");
						printf ("Vous apprenez que l'enfant est le fils du marchant du village et qu'il vous fera de grosses reductions si vous y allez\n");
						printf ("L'enfant s'en va retrouver ses parents en vous remerciant.\n");
						rangUp ();
						
					}
				}
			
			}
			//-----------------Enfant mort-----------------
			if ( choix == 2 ){
			choix =0;
			printf ("L'enfant se fait massacrer sous vos yeux\n");
			printf ("Il laisse le corps du garcon sur le sol et partent en courant\n");
			printf ("Les poursuivre (1)\n");
			printf ("Les laisser (2)\n");
			printf ("\n");
			scanf ("%d",&choix);
			printf ("\n");
			
				if ( choix == 1 && rang<2){
						choix =0;
						printf ("Vous commencez a les poursuivre\n");
						teteBrigantsMoins();
						
				}
					
				if ( choix == 1 && rang>=2){
					choix =0;
					printf ("Vous commencez a les poursuivre\n");
					teteBrigantsPlus();
				}
				
				if ( choix == 2 ){
					choix =0;
					printf ("Vous les laissez partir\n");
					printf ("Vous vous remettez en question après avoir vu se meurtre\n");
					printf ("Vous n'avez pas bouge\n");
					printf ("Vous n'etes visiblement pas pres pour l'aventure et la realite vous reviens en pleine figure\n");
					printf ("Peut etre que la prochaine fois vous ferez de meilleurs choix\n");
				
				}
			}

		
		}
		
		printf ("Vous etes de retour en ville\n");
		
		//-----------------Recompense-----------------
		if ( teteBrigant == 1){
			printf ("vous etes accueillis par le chef du village\n");
			printf ("Vous lui montrez la tete du brigant\n");
			printf ("Le chef saute de joie et vous donne les 20 pieces d'or\n");
			po = po +20;
			printf ("Vous avez %d pieces d'or sur vous\n",po);
		}
		
		if ( oursTue == 1){
			printf ("vous etes accueillis par le chef du village\n");
			printf ("Vous lui annoncez que l'ours n'embetera plus le village\n");
			printf ("Le chef saute de joie et vous donne les 15 pieces d'or\n");
			po = po +15;
			printf ("Vous avez %d pieces d'or sur vous\n",po);
		}
		
		printf ("Aller au centre ville a l'endroit des quetes (1)\n");
		printf ("Aller voir le marchant (2)\n");
		printf ("Partir de cette ville pour aller a une autre (3)\n");
		printf ("\n");
		scanf ("%d",&choix);
		printf ("\n");
		
		//-----------------Aller au centre ville-----------------
		if ( choix == 1 ){
			choix =0;
			printf ("Vous vous rendez donc au centre ville vers le panneau des quetes\n");
			
			// Quetes quand on a plus l'ours 
			if ( oursTue == 1){

				printf ("Sur le panneau des quetes il reste l'animal de companie a retrouver (1)\n");
				printf ("ou la tete du brigant a aller chercher dans la foret (2)\n");
				printf ("\n");
				scanf ("%d",&choix);
				printf ("\n");
			
				//-----------------Animal de compagnie 2-----------------
				if (choix == 1){
					choix = 0;
					queteAnimalCompagnie();
				}
				
				//-----------------Brigants mort-----------------------------
				if (choix == 2 && rang<2){
					choix = 0;
					teteBrigantsMoins();
				}
				
				//-----------------Brigants tue-----------------------------
				if (choix == 2 && rang>=2){
					choix = 0;
					teteBrigantsPlus();
					printf ("Vous etes de retour en ville\n");
					printf ("vous etes accueillis par le chef du village\n");
					printf ("Vous lui montrez la tete du brigant\n");
					printf ("Le chef saute de joie et vous donne les 20 pieces d'or\n");
					po = po +20;
					printf ("Vous avez %d pieces d'or sur vous\n",po);
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
					printf ("Il ne vous reste plus que sauver l'animal de compagnie de la vieille dame\n");
					printf ("partir pour la faire (1)\n");
					printf ("Laisser tomber et changer de ville (2)\n");
					printf ("\n");
					scanf ("%d",&choix);
					printf ("\n");
					
					if (choix == 1){
						choix = 0;
						queteAnimalCompagnie();
					}
					
					if (choix == 2){
						choix = 0;
						voyager();
					}
					
				}
				
				//shop
				if (choix ==2 ){
					choix =0;
					shop();
					printf ("Que faire maintenant ?");
					printf ("Aller au centre ville pour allez sauver l'animal de la vieille dame (1)\n");
					printf ("Partir de cette ville pour aller a une autre (2)\n");
					printf ("\n");
					scanf ("%d",&choix);
					printf ("\n");
					
					if ( choix == 1){
						choix = 0;
						queteAnimalCompagnie();
					}
					if ( choix == 3){
						choix = 0;
						voyager();
					
					}
					
				}
				
				// voyager
				if ( choix == 3){
					choix = 0;
					voyager();
				}
			}
			
			//Quete quand on a tué les brigants
			if ( teteBrigant == 1){
				printf ("Sur le panneau des quetes il reste l'animal de companie a retrouver (1)\n");
				printf ("ou l'ours a chasser de sa caverne (2)\n");
				printf ("\n");
				scanf ("%d",&choix);
				printf ("\n");
				
				if (choix == 1){
					choix =0;
					queteAnimalCompagnie();
				}
				
				if (choix == 2){
					choix =0;
					queteOurs();
					printf ("Vous etes de retour en ville\n");
					if ( oursTue == 1){
						printf ("vous etes accueillis par le chef du village\n");
						printf ("Vous lui annoncez que l'ours n'embetera plus le village\n");
						printf ("Le chef saute de joie et vous donne les 15 pieces d'or\n");
						po = po +15;
						printf ("Vous avez %d pieces d'or sur vous\n",po);
						printf ("Que faire maintenant ?");
						printf ("Aller au centre ville pour allez sauver l'animal de la vieille dame (1)\n");
						printf ("Aller voir le marchant (2)\n");
						printf ("Partir de cette ville pour aller a une autre (3)\n");
						printf ("\n");
						scanf ("%d",&choix);
						printf ("\n");
						
						if ( choix == 1){
							choix = 0;
							queteAnimalCompagnie();
						}
						
						if ( choix == 2){
							choix = 0;
							shop();
							printf ("Que faire maintenant ?");
							printf ("Aller au centre ville pour allez sauver l'animal de la vieille dame (1)\n");
							printf ("Partir de cette ville pour aller a une autre (2)\n");
							printf ("\n");
							scanf ("%d",&choix);
							printf ("\n");
								
							if ( choix == 1){
								choix = 0;
								queteAnimalCompagnie();
							}
							
							if ( choix == 2){
							choix = 0;
							voyager();
						}
						
						if ( choix == 3){
							choix = 0;
							voyager();
							
						}
						
					}
				}
				}
			}
		}

		//-----------------Marchant 2-----------------
		if ( choix == 2 ){
			choix =0;
			shop();
			
			printf ("Aller au centre ville a l'endroit des quetes (1)\n");
			printf ("Partir de cette ville pour aller a une autre (3)\n");
			printf ("\n");
			scanf ("%d",&choix);
			printf ("\n");
			
			// Quetes quand on a plus l'ours 
			if ( oursTue == 1){

				printf ("Sur le panneau des quetes il reste l'animal de companie a retrouver (1)\n");
				printf ("ou la tete du brigant a aller chercher dans la foret (2)\n");
				printf ("\n");
				scanf ("%d",&choix);
				printf ("\n");
			
				//-----------------Animal de compagnie 2-----------------
				if (choix == 1){
					choix = 0;
					queteAnimalCompagnie();
				}
				
				//-----------------Brigants mort-----------------------------
				if (choix == 2 && rang<2){
					choix = 0;
					teteBrigantsMoins();
				}
				
				//-----------------Brigants tue-----------------------------
				if (choix == 2 && rang>=2){
					choix = 0;
					teteBrigantsPlus();
					printf ("Vous etes de retour en ville\n");
					printf ("vous etes accueillis par le chef du village\n");
					printf ("Vous lui montrez la tete du brigant\n");
					printf ("Le chef saute de joie et vous donne les 20 pieces d'or\n");
					po = po +20;
					printf ("Vous avez %d pieces d'or sur vous\n",po);
				}	
		
		
				printf ("Aller au centre ville a l'endroit des quetes (1)\n");
				printf ("Partir de cette ville pour aller a une autre (2)\n");
				printf ("\n");
				scanf ("%d",&choix);
				printf ("\n");
				
				if ( choix == 1 ){
					choix =0;
					printf ("Vous vous rendez donc au centre ville vers le panneau des quetes\n");
					printf ("Il ne vous reste plus que sauver l'animal de compagnie de la vieille dame\n");
					printf ("partir pour la faire (1)\n");
					printf ("Laisser tomber et changer de ville (2)\n");
					printf ("\n");
					scanf ("%d",&choix);
					printf ("\n");
					
					if (choix == 1){
						choix = 0;
						queteAnimalCompagnie();
					}
					
					if (choix == 2){
						choix = 0;
						voyager();
					}
					
				}
				
				// voyager
				if ( choix == 2){
					choix = 0;
					voyager();
				}
			}
			
			//Quete quand on a tué les brigants
			if ( teteBrigant == 1){
				printf ("Sur le panneau des quetes il reste l'animal de companie a retrouver (1)\n");
				printf ("ou l'ours a chasser de sa caverne (2)\n");
				printf ("\n");
				scanf ("%d",&choix);
				printf ("\n");
				
				if (choix == 1){
					choix =0;
					queteAnimalCompagnie();
				}
				
				if (choix == 2){
					choix =0;
					queteOurs();
					printf ("Vous etes de retour en ville\n");
					if ( oursTue == 1){
						printf ("vous etes accueillis par le chef du village\n");
						printf ("Vous lui annoncez que l'ours n'embetera plus le village\n");
						printf ("Le chef saute de joie et vous donne les 15 pieces d'or\n");
						po = po +15;
						printf ("Vous avez %d pieces d'or sur vous\n",po);
						printf ("Que faire maintenant ?");
						printf ("Aller au centre ville pour allez sauver l'animal de la vieille dame (1)\n");
						printf ("Aller voir le marchant (2)\n");
						printf ("Partir de cette ville pour aller a une autre (3)\n");
						printf ("\n");
						scanf ("%d",&choix);
						printf ("\n");
						
						if ( choix == 1){
							choix = 0;
							queteAnimalCompagnie();
						}
						
						if ( choix == 2){
							choix = 0;
							shop();
							printf ("Que faire maintenant ?");
							printf ("Aller au centre ville pour allez sauver l'animal de la vieille dame (1)\n");
							printf ("Partir de cette ville pour aller a une autre (2)\n");
							printf ("\n");
							scanf ("%d",&choix);
							printf ("\n");
								
							if ( choix == 1){
								choix = 0;
								queteAnimalCompagnie();
							}
							
							if ( choix == 2){
							choix = 0;
							voyager();
						}
						
						if ( choix == 3){
							choix = 0;
							voyager();
							
						}
						
					}
				}
				}
			}
		}
	
		
		//-----------------Changer de ville-----------------		
		if ( choix == 3 ){
			choix =0;
			voyager();
		}
		
	
	}
	
	
	
	// ------------------------------------------------------------------ FUN'HU ----------------------------------------------------------------------
	if ( choix == 2 ){
		printf ("Vous partez donc en direction de Fun'hu, vers l'ocean.\n");
		printf ("La legende raconte que dans les eaux proches de ce village sont maudites\n");
		printf ("Les personnes n'osent se rendre dans ces eaux car ils ont peur d'y rester \n");
		printf ("Vous arrivez dans le village, il semble completement vide\n");
		printf ("Pas une personne en vue, pas un bruit.\n");
		printf ("A defaut d'avoir des quetes, peut etre que vous pourriez découvrir se qui se passe?\n");
		printf ("Enqueter sur le village (1)\n");
		printf ("Changer de village (2)\n");
		printf ("\n");
		scanf ("%d",&choix);
		printf ("\n");
		
		if (choix == 1){
			choix  = 0;
			printf ("Vous entrez donc dans le village\n");
			printf ("Vous sentez une pression des l'instant ou vous mettez le pied dans la ville\n");
			printf ("Vous voyez au loin un vieux puits\n");
			printf ("Vous savez qu'il y a l'ocean tres proche du village\n");
			printf ("D'un autre cote, il y a une colline qui touche le village, peut etre pourrez vous avoir une vue d'ensemble.\n");
			printf ("Aller vers le puits (1)\n");
			printf ("Aller vers l'eau (2)\n");
			printf ("Aller a la colline (3)\n");
			printf ("\n");
			scanf ("%d",&choix);
			printf ("\n");
			
			if (choix == 2){
				choix =0;
					
			}
			
			if (choix == 2){
				choix =0;
				
		
			}
			
			if (choix == 2){
				=0;
			
		
			}
		}
		
		if (choix == 2){
			choix =0;
			voyager();
		
		}
	}
	
	
	// ------------------------------------------------------------------RAGDOL ----------------------------------------------------------------------
	if ( choix == 3 ){
		printf ("Vous partez donc en direction de Ragdol.\n");
	}

	
	return 0;
}