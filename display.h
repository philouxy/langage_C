//-----------------------------------------------------------------------------------//
// Nom du projet 		    : Langage_C_fixme
// Nom du fichier 		    : display.h
// Date de création 	    : 25.02.2015
// Date de modification     : 14.04.2015
//
// Auteur 				    : Philou (Ph. Bovey)
//
// Description              : fichier de type header file pour toutes les fonctions
//                            liées à l'afficahge
//
//
// Remarques 			    : lien pour la table ASCII :
// 						    -> http://www.asciitable.com/
// 						     lien pour la saisie de clavier avec getc & getchar pour ne pas
//                           avoir des erreurs d'interprétation
// 						    -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						     lien vers différents
// 						    -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//
#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED
//--- librairie associée ---//

//--- constante ou définition ---//
#define MAX_CARA                80
#define PRINT_SAUT_LIGNE        printf("\n")
#define PRINT_ESPACE            printf(" ")
#define PRINT_M_MENU            printf("MENU : ")
#define NAME_M_ARITHEMTIQUE     "ARITHMETIQUE"
#define NAME_M_PRINICIPAL       "PRINCIPAL"
#define NAME_M_ASTUCE           "ASTUCE"
#define PRINT_SELECTION_MENU    printf("Veuillez Selectionner votre Menu : ")

//--- déclaration de prototype ---//
void Template_Menu_Ligne(void);                 //-> affiche un trait d'*
void Template_Display_Menu(char choix_menu);    //-> affiche le titre dans lequel se trouve le user
void Template_Choix_Menu_Principal(void);       //-> affiche le menu principal pour le user
void Template_Choix_Menu_Arithmetique(void);    //-> affiche le menu arithmetique
void Help_Printf(void);                         //-> affiche une aide sur le printf

#endif // DISPLAY_H_INCLUDED
