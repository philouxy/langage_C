//-----------------------------------------------------------------------------------//
// Nom du projet 		    : Langage_C_fixme
// Nom du fichier 		    : display.h
// Date de cr�ation 	    : 25.02.2015
// Date de modification     : 16.04.2023
//
// Auteur 				    : Philou (Ph. Bovey)
//
// Description              : fichier de type headerfile pour toutes les d�finitions
//                            et fonctions li�es � l'afficahge
//
// Remarques 			    :
//----------------------------------------------------------------------------------//
#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

//--- librairie associ�e ---//
#include <stdint.h>

#include "arithmetique.h"

//-- versionning --//
#define CODE_BLOCK
//#define VISUAL_STUDIO

//--- constante ou d�finition ---//
#ifdef VISUAL_STUDIO
    const uint8_t CST_CONVASCII_NUM = 48;
#else
    //const char CST_CONVASCII_NUM = 48;
    #define CST_CONVASCII_NUM 48
#endif // VISUAL_STUDIO

//-- caract�re sp�cifique --//
#define CHOIX_BAS               66          // repr�sente B en caract�re
#define CHOIX_DROITE            68          // repr�sente D en caract�re
#define CHOIX_ENTIER            73          // repr�sente I en caract�re
#define CHOIX_EXIT              69          // repr�sente E en caract�re
#define CHOIX_FLOTTANT          70          // repr�sente F en caract�re
#define CHOIX_GAUCHE            71          // repr�sente G en caract�re
#define CHOIX_HAUT              72          // repr�sente H en caract�re
#define CHOIX_MENU              77          // repr�sente M en caract�re
//#define CHOIX_MENU_PRINCIPAL    80          // repr�sente P en caract�re
#define CHOIX_PLEINS            80          // repr�sente P en caract�re
#define CHOIX_VIDE              86          // repr�sente V en caract�re
#define LIMITE_ETOILE_MIN		1			// nb d'�toile min que l'on peut afficher
#define LIMITE_ETOILE_MAX		15			// nb d'�toile min que l'on peut afficher
#define LIMITE_NB_MAX			100			// limite d'un nombre entier
#define LIMITE_NB_MIN			-100		// limite d'un nombre entier
#define MAX_CARA                80          // largeur d'une fen�tre DOS

//-- gestion de message user --//
#define DELETE_SCREEN				system("cls")
#define PRINT_SAUT_LIGNE			printf("\n")
#define PRINT_ESPACE				printf(" ")
#define PRINT_ETOILE				printf("*");
#define PRINT_M_MENU				printf("MENU : ")
#define PRINT_SELECTION_ABSCISSE	printf("Entrer Valeur entiere entre %d et %d :", LIMITE_AXE_X_MIN, LIMITE_AXE_X_MAX)
#define PRINT_SELECTION_CHAR		printf("Veuillez taper un caractere :")
#define PRINT_SELECTION_CHOIX		printf("Veuillez Selectionner votre choix : ")
#define PRINT_SELECTION_FLOAT		printf("Voulez-vous travailler en flottant - taper 'F' ")
#define PRINT_SELECTION_GD			printf("Veuillez choisir entre Gauche[G] et Droite[D] : ")
#define PRINT_SELECTION_HB			printf("Veuillez choisir entre Haut[H] et Bas[B] : ")
#define PRINT_SELECTION_INT			printf("Voulez-vous travailler en entier   - taper 'I' ")
#define PRINT_SELECTION_INT_LIMIT   printf("Entrer Valeur entiere entre %d et %d : ", LIMITE_AXE_X_MIN, LIMITE_AXE_X_MAX)
#define PRINT_SELECTION_MENU		printf("Veuillez Selectionner votre Menu : ")
#define PRINT_SELECTION_NB			printf("Indiquer un nombre : ")
#define PRINT_SELECTION_NEW_NB		printf("Indiquer un nouveau nombre : ")
#define PRINT_SELECTION_ORDONNEE	printf("Entrer Valeur entiere entre %d et %d :", LIMITE_AXE_Y_MIN, LIMITE_AXE_Y_MAX)
#define PRINT_SELECTION_PV			printf("Veuillez choisir entre Plein [P] et Vide [V] : ")

#define NAME_M_ADITION                  "ADITION"
#define NAME_M_AFFICHAGE                "AFFICHAGE"
#define NAME_M_ARITHEMTIQUE             "ARITHMETIQUE"
#define NAME_M_ASTUCE_PRINTF            "ASTUCE PRINTF"
#define NAME_M_ASTUCE_INCR              "ASTUCE INCREMENTATION & DECREMENTATION"
#define NAME_M_ASTUCE_CONV_CHAR_NUM     "ASTUCE CONVERSION CARACTERE NUMERIQUE - TABLE"
#define NAME_M_ASTUCE_LOOP              "ASTUCE BOUCLE"
#define NAME_M_ASTUCE_MEMOIRE           "ASTUCE MEMOIRE"
#define NAME_M_CALCUL_SEG_AB			"CALCUL SEGMENT POINT_A(x,y) - POINT_B(x,y)"
#define NAME_M_CONV                     "CONVERSIONS"
#define NAME_M_CONV_CHAR_NUM            "CONVERSION CARACTERE EN NUM (DEC - HEXA)"
#define NAME_M_CONV_DECIMAL_BINAIRE		"CONVERSION DECIMAL BINAIRE"
#define NAME_M_CONV_NUM_CHAR            "CONVERSION NUMERIQUE EN CARACTERE"
#define NAME_M_CONV_NUM_OCT_HEX         "CONVERSION NUMERIQUE EN OCTAL - HEXA"
#define NAME_M_DIVISION                 "DIVISION"
#define NAME_M_DISP_CARRE               "AFFICHAGE DE CARRE"
#define NAME_M_DISP_LOSANGE             "AFFICHAGE DE LOSANGE"
#define NAME_M_DISP_PARALLELOGRAMME     "AFFICHAGE DE PARALLELOGRAMME"
#define NAME_M_DISP_TRIANGLE            "AFFICHAGE DE TRIANGLE"
#define NAME_M_MULTIPLICATION           "MULTIPLICATION"

#define NAME_M_OP_SIMPLE                "OPERATION SIMPLE"
#define NAME_M_PRINICIPAL               "PRINCIPAL"
#define NAME_M_SOUSTRACTION             "SOUSTRACTION"
#define NAME_M_VECTEUR                  "VECTEUR"

//-- typedef -> �num�ration --//
//-- �num�ration pour la gestion des menus principaux
typedef enum {m_principal,
              m_arithmetique,
              m_affichage,
              m_astucePrint,
              m_astuceLoop,
              m_astuceMemory} e_infoMenus;

//-- �num�ration pour la gestion des s�lections
typedef enum {select_menu,
              select_sousMenu,
              select_valeur} e_selectionMSG;


//--- d�claration de variable global ---//
extern char var_retour;

//--- d�claration de prototype ---//
//--- li�e au fichier template_menu.c ---//
void Template_Menu_Ligne(void);                         //-> affiche un trait d'*
void Template_Display_Menu(e_infoMenus choix_menu);     //-> affiche le titre dans lequel se trouve le user et s�lectionne le menu choisi
void Template_Choix_Menu_Principal(void);               //-> affiche le menu principal pour le user

//--- li�e au fichier template_menu_arithm.c ---//
void Template_Display_Menu_Arithm(char choix_menu);     //-> affiche le titre dans lequel se trouve le user et s�lectionne le menu choisi
void Template_Choix_Menu_Arithmetique(void);            //-> affiche le menu arithmetique
void Template_Choix_Menu_OP_Simple(void);               //-> affiche le menu op�ration simple
void Template_Choix_Menu_Conversion(void);              //-> affiche le menu Conversion
void Template_Display_Menu_OP_Simple(char choix_menu);  //-> affiche le menu concernant les o�rations simples
void Template_Display_Menu_Conversion(char choix_menu); //-> affiche le menu concernant diff�rentes conversions

//--- li�e au fichier template_menu_display.c ---//
void Template_Choix_Menu_Display(void);                 //-> affichage de diff�rents theme du menu display
void Template_Display_Menu_Display(char choix_menu);    //-> affiche le titre dans lequel se trouve le user et s�lectionne le menu choisi

//--- li�e au fichier selection_user.c ---//
char Selection_Menus(e_selectionMSG choix_selection_msg);                     //-> permet de r�cuprer une valeur entrer par l'utilisateur
char Select_Option(void);                                           //-> permet � l'utilisteur de choisir entre deux options
char Select_Var_Cara(void);                                         //-> r�cup�re un caract�re fournis par un utilisateur
float SelectValFlottantAvecLimite(float limitMax, float limitMin);  //-> r�cup�re une chaine de caract�re et la transforme en floattant en contr�lant des limites
float Select_Var_Flottant(void);                                    //-> r�cup�re une chaine de caract�re et la transforme en floattant
int SelectValEntierSansLimite(void);                                //-> r�cup�re une ch�ine de cha�ne de caract�re et le transforme en entier
int Select_Var_Entier(int limiteMax, int limiteMin);                //-> r�cup�re une ch�ine de cha�ne de caract�re et le transforme en entier avec controle de limite

//--- li� au fichier help.c ---//
void Help_Printf(void);             //-> affiche une aide sur le printf
void Help_Loop(void);               //-> effet visuel avec des boucles it�ratives
void HelpMemorie(void);                 //-> indicateurs sur la gestion de variable m�moire

//--- li�e au fichier affichage.c ---//
void Triangle_Etoile_AGB(int nb_etoile);                            // permet d'afficher un triangle selon les datas du user
void Triangle_Etoile_AGH(int nb_etoile);
void Triangle_Etoile_ADB(int nb_etoile);
void Triangle_Etoile_ADH(int nb_etoile);
void Carre(int val_user);                                           // afficher un carr� plein d'�toiles
void Parallelogramme_AG(int val_user);                              // affiche un parallelogramme avec l'angle a gauche
void Parallelogramme_AD(int val_user);                              // affiche un parallelogramme avec l'angle a droite
void Choix_Emplacement_Triangle(char choix_HB, char choix_GD);      // definit quel dessin de traingle afficher selon le user
void Losange_Vide(void);                                            // affiche un losange entour� d'�toile
void Losange_Plein(void);                                           // affiche un losange remplit d'�toile
void Selection_Losange (char choix_user);                           // selectionne un losange vide ou plein
void Selection_Sens_Paralelogramme(char choix_user);                // choix pour l'affichage d'un parallelogramme (angle droite ou gauche)

#endif // DISPLAY_H_INCLUDED
