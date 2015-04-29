//-----------------------------------------------------------------------------------//
// Nom du projet 		    : Langage_C_fixme
// Nom du fichier 		    : display.h
// Date de création 	    : 25.02.2015
// Date de modification     : 29.04.2015
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
#define PRINT_SELECTION_MENU    printf("Veuillez Selectionner votre Menu : ")
#define PRINT_SELECTION_CHOIX   printf("Veuillez Selectionner votre choix : ")
#define PRINT_SELECTION_NB      printf("Indiquer un nombre : ")

#define NAME_M_ADITION          "ADITION"
#define NAME_M_ARITHEMTIQUE     "ARITHMETIQUE"
#define NAME_M_ASTUCE           "ASTUCE"
#define NAME_M_DIVISION         "DIVISION"
#define NAME_M_MULTIPLICATION   "MULTIPLICATION"
#define NAME_M_OP_SIMPLE        "OPERATION SIMPLE"
#define NAME_M_PRINICIPAL       "PRINCIPAL"
#define NAME_M_SOUSTRACTION     "SOUSTRACTION"

//--- déclaration de variable global ---//
extern char var_retour;

//--- déclaration de prototype ---//
//--- liée au fichier template_menu.c ---//
void Template_Menu_Ligne(void);                         //-> affiche un trait d'*
void Template_Display_Menu(char choix_menu);            //-> affiche le titre dans lequel se trouve le user et sélectionne le menu choisi
void Template_Choix_Menu_Principal(void);               //-> affiche le menu principal pour le user
void Help_Printf(void);                                 //-> affiche une aide sur le printf

//--- liée au fichier template_menu_arithm.c ---//
void Template_Display_Menu_Arithm(char choix_menu);     //-> affiche le titre dans lequel se trouve le user et sélectionne le menu choisi
void Template_Choix_Menu_Arithmetique(void);            //-> affiche le menu arithmetique
void Template_Choix_Menu_OP_Simple(void);               //-> affiche le menu opération simple
void Template_Display_Menu_OP_Simple(char choix_menu);  //-> affiche le menu concernant les oérations simples

//--- liée au fichier selection_user.c ---//
char Selection_Menus(char choix_selection_msg);         //-> permet de récuprer une valeur entrer par l'utilisateur


#endif // DISPLAY_H_INCLUDED
