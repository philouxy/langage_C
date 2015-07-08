//-----------------------------------------------------------------------------------//
// Nom du projet 		    : Langage_C_fixme
// Nom du fichier 		    : display.h
// Date de création 	    : 25.02.2015
// Date de modification     : 08.07.2015
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
#define CHOIX_ENTIER            73          // représente I en caractère
#define CHOIX_FLOTTANT          70          // représente F en caractère

#define PRINT_SAUT_LIGNE        printf("\n")
#define PRINT_ESPACE            printf(" ")
#define PRINT_M_MENU            printf("MENU : ")
#define PRINT_SELECTION_MENU    printf("Veuillez Selectionner votre Menu : ")
#define PRINT_SELECTION_CHAR    printf("Veuillez taper un caractere :")
#define PRINT_SELECTION_CHOIX   printf("Veuillez Selectionner votre choix : ")
#define PRINT_SELECTION_NB      printf("Indiquer un nombre : ")
#define PRINT_SELECTION_INT     printf("Voulez-vous travailler en entier   - taper 'I' ")
#define PRINT_SELECTION_FLOAT   printf("Voulez-vous travailler en flottant - taper 'F' ")

#define NAME_M_ADITION              "ADITION"
#define NAME_M_ARITHEMTIQUE         "ARITHMETIQUE"
#define NAME_M_ASTUCE_PRINTF        "ASTUCE PRINTF"
#define NAME_M_ASTUCE_INCR          "ASTUCE INCREMENTATION & DECREMENTATION"
#define NAME_M_ASTUCE_CONV_CHAR_NUM "ASTUCE CONVERSION CARACTERE NUMERIQUE - TABLE"
#define NAME_M_CONV                 "CONVERSIONS"
#define NAME_M_CONV_CHAR_NUM        "CONVERSION CARACTERE EN NUM (DEC - HEXA)"
#define NAME_M_CONV_NUM_CHAR        "CONVERSION NUMERIQUE EN CARACTERE"
#define NAME_M_DIVISION             "DIVISION"
#define NAME_M_MULTIPLICATION       "MULTIPLICATION"
#define NAME_M_OP_SIMPLE            "OPERATION SIMPLE"
#define NAME_M_PRINICIPAL           "PRINCIPAL"
#define NAME_M_SOUSTRACTION         "SOUSTRACTION"

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
void Template_Choix_Menu_Conversion(void);              //-> affiche le menu Conversion
void Template_Display_Menu_OP_Simple(char choix_menu);  //-> affiche le menu concernant les oérations simples
void Template_Display_Menu_Conversion(char choix_menu); //-> affiche le menu concernant différentes conversions

//--- liée au fichier selection_user.c ---//
char Selection_Menus(char choix_selection_msg);         //-> permet de récuprer une valeur entrer par l'utilisateur
char Select_Var_Cara(void);                             //-> récupère un caractère fournis par un utilisateur
char Select_Option(void);                               //-> permet à l'utilisteur de choisir entre deux options
float Select_Var_Flottant(void);                        //-> récupère une chaine de caractère et la transforme en floattant
int Select_Var_Entier(void);                            //-> récupère une châine de chaîne de caractère et le transforme en entier



#endif // DISPLAY_H_INCLUDED
