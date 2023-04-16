//-----------------------------------------------------------------------------------//
// Nom du projet 		:   Langage_C_fixme
// Nom du fichier 		:   template_menu.c
// Date de création 	:   25.02.2015
// Date de modification : 	16.04.2023
//
// Auteur 				: 	Philou (Ph. Bovey)
//
// Description 			: 	Sorte de template modifiable pour afficher un menu
//                          -> ici la partie du menu principal
//
// Remarques			:   lien pour la table ASCII :
//                          http://www.asciitable.com/
//                          lien pour la saisie de clavier avec getc & getchar pour ne pas
//                          avoir des erreurs d'interprétation
//                          http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
//                          lien vers différents
//                          http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>                 // pour les fonctions systèmes

//--- librairie perso ---//
#include "display.h"

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Template_Menu_Ligne
// Entrée / Sortie      : - / - /
// Description          : affiche la structure du menu --> ligne remplie de '*'
// Date modfification   : le 13.03.2019
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Menu_Ligne(void)
{
    //--- déclaration de variable interne ---//
    char i;

    //--- boucle pour afficher x caractère sur une ligne ---//
    for(i = 0; i < MAX_CARA; i++)
    #ifdef VISUAL_STUDIO
        printf("*");
    #else
          printf("*");

    PRINT_SAUT_LIGNE;

    #endif // VISUAL_STUDIO
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Template_Display_Menu
// Entrée / Sortie      : choix_menu / - /
// Description          : affiche le menu dans lequel on se situe
// Date modfification   : le 16.04.2023
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Display_Menu(e_infoMenus choix_menu)
{
    //--- déclaration de variable interne ---//
    char i;
    char car_retour;

    //--- boucle pour afficher x caractère sur une ligne ---//
    for(i = 0; i < 3; i++)
        printf("*");

    //--- pour l'esthétique afficher un espace avant le mots "menu" ---/
    PRINT_ESPACE;
    PRINT_M_MENU;

    switch(choix_menu)
    {
        case m_principal:
            printf("%s", NAME_M_PRINICIPAL);
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
            PRINT_SAUT_LIGNE;
            Template_Choix_Menu_Principal();                //-> appel un template qui affiche le menu principale
        break;

        case m_arithmetique:
            printf("%s", NAME_M_ARITHEMTIQUE);
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
            PRINT_SAUT_LIGNE;
            Template_Choix_Menu_Arithmetique();             //-> appel un template qui affiche le sous menu arithmétique
            PRINT_SAUT_LIGNE;
            PRINT_SAUT_LIGNE;
            car_retour = Selection_Menus(select_sousMenu);       //-> on indique que l'on veut un caractère en retour
            DELETE_SCREEN;

            //-- appel d'un nouveau menu --//
            Template_Display_Menu_Arithm(car_retour);       //-> affiche le nouveau menu sélectionné
            PRINT_SAUT_LIGNE;
        break;

        case m_affichage:
            printf("%s", NAME_M_AFFICHAGE);
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
            PRINT_SAUT_LIGNE;
            Template_Choix_Menu_Display();                  //-> appel un template qui affiche le sous menu afficahge
            PRINT_SAUT_LIGNE;
            PRINT_SAUT_LIGNE;
            car_retour = Selection_Menus(select_sousMenu);       //-> on indique que l'on veut un caractère en retour
            DELETE_SCREEN;

            //-- appel d'un nouveau menu --//
            Template_Display_Menu_Display(car_retour);      //-> affiche le nouveau menu sélectionné
            PRINT_SAUT_LIGNE;
        break;

        case m_astucePrint:
            printf("%s", NAME_M_ASTUCE_PRINTF);
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
            PRINT_SAUT_LIGNE;
            Help_Printf();
        break;

        case m_astuceLoop:
            printf("%s", NAME_M_ASTUCE_LOOP);
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
            PRINT_SAUT_LIGNE;
            Help_Loop();
        break;

        case m_astuceMemory:
            printf("%s", NAME_M_ASTUCE_MEMOIRE);
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
            PRINT_SAUT_LIGNE;
        break;



        default:
            printf("LA SELECTION N'EXISTE PAS !!!");
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
        break;
    }
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Template_Choix_Menu
// Entrée / Sortie      : - / - /
// Description          : affiche le choix du menu pour l'utilisateur
// Date modfification   : le 28.05.2019
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Choix_Menu_Principal(void)
{
    //--- déclaration propre à la fonction ---//
    //char var_choix_menu;

    printf("[1] %s", NAME_M_ARITHEMTIQUE);
    PRINT_SAUT_LIGNE;
    printf("[2] %s", NAME_M_AFFICHAGE);
    PRINT_SAUT_LIGNE;
    printf("[3] ... \n");
    printf("[4] ... \n");
    printf("[A] --- %s ---", NAME_M_ASTUCE_PRINTF);
    PRINT_SAUT_LIGNE;
    printf("[B] --- %s ---", NAME_M_ASTUCE_LOOP);
    PRINT_SAUT_LIGNE;
    printf("[C] --- %s ---", NAME_M_ASTUCE_MEMOIRE);
    PRINT_SAUT_LIGNE;
    printf("[Q] --- help ---\n");
    printf("[E] --- fermer le programme ---");
}

    //printf("\x1b[1;1 H]");
    //system("cls");
