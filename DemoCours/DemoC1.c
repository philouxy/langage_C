//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo Cours en C 
// Nom du fichier 		: DemoC1.c
// Date de cr�ation 	: 07.08.2021
// Date de modification : xx.xx.2021
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : Juste un "hello world" 
//
//
// Remarques :           
//----------------------------------------------------------------------------------//
//-- librairie standart --//
#include <stdio.h>				// appel de la librairie pour les I/O 

//-- librairie perso --//

//-- entr�e du programme => main --// 
void main(void)
{
	//-- d�claration --// 
	int valeurRecup; 

	//-- affichage d'un msg en mode console --// 
	printf("Hello les SOL ! \n"); 
	printf("De quelle annee etes-vous ? "); 

	//-- recuperation info utilisateur => valeur num�rique enti�re --//
	//-- suppression du de l'erreur C4996
	//#pragma warning(suppress : 4996)
	scanf("%d", &valeurRecup); 

}
