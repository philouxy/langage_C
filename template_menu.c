//-----------------------------------------------------------------------------------//
// Nom du projet 		:   Langage_C_fixme
// Nom du fichier 		:   template_menu.c
// Date de création 	:   25.02.2015
// Date de modification : 	27.04.2015
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
#include <string.h>

//--- librairie perso ---//
#include "display.h"

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Template_Menu_Ligne
// Entrée / Sortie      : - / - /
// Description          : affiche la structure du menu --> ligne remplie de '*'
// Date modfification   : le 08.04.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Menu_Ligne(void)
{
    //--- déclaration de variable interne ---//
    char i;

    //--- boucle pour afficher x caractère sur une ligne ---//
    for(i = 0; i < MAX_CARA; i++)
        printf("*");
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Template_Display_Menu
// Entrée / Sortie      : choix_menu / - /
// Description          : affiche le menu dans lequel on se situe
// Date modfification   : le 27.04.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Display_Menu(char choix_menu)
{
    //--- déclaration de variable interne ---//
    char i;
    char var_retour;

    //--- boucle pour afficher x caractère sur une ligne ---//
    for(i = 0; i < 3; i++)
        printf("*");

    //--- pour l'esthétique afficher un espace avant le mots "menu" ---/
    PRINT_ESPACE;
    PRINT_M_MENU;

    switch(choix_menu)
    {
        case('P'):
            printf("%s", NAME_M_PRINICIPAL);
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
            PRINT_SAUT_LIGNE;
            Template_Choix_Menu_Principal();
        break;

        case('1'):
            printf("%s", NAME_M_ARITHEMTIQUE);
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
            PRINT_SAUT_LIGNE;
            Template_Choix_Menu_Arithmetique();
            PRINT_SAUT_LIGNE;
            PRINT_SAUT_LIGNE;
            var_retour = Selection_Menus();
            Template_Display_Menu_Arithm(var_retour);
            PRINT_SAUT_LIGNE;
        break;

        case('A'):
            printf("%s", NAME_M_ASTUCE);
            PRINT_SAUT_LIGNE;
            Template_Menu_Ligne();
            PRINT_SAUT_LIGNE;
            Help_Printf();
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
// Date modfification   : le 14.04.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Choix_Menu_Principal(void)
{
    //--- déclaration propre à la fonction ---//
    //char var_choix_menu;

    printf("[1] %s", NAME_M_ARITHEMTIQUE);
    PRINT_SAUT_LIGNE;
    printf("[2] ... \n");
    printf("[3] ... \n");
    printf("[4] ... \n");
    printf("[A] --- %s ---", NAME_M_ASTUCE);
    PRINT_SAUT_LIGNE;
    printf("[Q] --- help ---\n");
    printf("[E] --- fermer le programme ---");

    //return
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Help_Printf
// Entrée / Sortie      : - / - /
// Description          : on affiche quelques régles avec le printf
// Date modfification   : le 14.04.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Help_Printf(void)
{
    //--- Notion du "Printf" --> permet l'affichage dans une console ---//
    printf("-> le printf : permet d'afficher du texte dans une console \n");
    printf("-> le \\n permet un retour a la ligne \n");
    printf("-> pour afficher un entier on utilise %%d \n   pour afficher une valeur en hexa %%x \n");
    printf("-> pour un nombe a virgule on utilise %%f \n   et pour notation scientifique on utilise %%E \n");
    printf("-> pour aligner des nombres entier %%min.max \n   definit les nb de caractere + un signe - devant le ");
    printf("   permet d'aligner a gauche \n");
    printf("-> pour des nombres flottants %%car_total.chiffre_A_virgf \n   définit les caracteres totaux a afficer");
    printf("   le nombre apres la virgule ");
    printf("-> et pour afficher un caractere %%c \n\n");
}
