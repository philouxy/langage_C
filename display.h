//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: display.h
// Date de création 	: 25.02.2015
// Date de modification : 26.02.2015
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description : fichier de type header file pour toutes les fonctions
// liées à l'afficahge
//
//
// Remarques 			: lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//
#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED
//--- librairie associée ---//

//--- constante ou définition ---//
#define MAX_CARA 80
#define PRINT_SAUT_LIGNE printf("\n");

//--- déclaration de prototype ---//
void Template_Menu_Ligne_Haut(void);    //-> affiche un trait d'*
void Template_Menu_Ligne_Bas(void);     //-> affiche un trait d'*
void Template_Choix_Menu(void);         //-> affiche le menu pour le user
void Help_Printf(void);                 //-> affiche une aide sur le printf

#endif // DISPLAY_H_INCLUDED
