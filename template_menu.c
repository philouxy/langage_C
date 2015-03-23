//-----------------------------------------------------------------------------------//
// Nom du projet 		:   Langage_C_fixme
// Nom du fichier 		:   template_menu.c
// Date de création 	:   25.02.2015
// Date de modification : 	23.03.2015
//
// Auteur 				: 	Philou (Ph. Bovey)
//
// Description 			: 	Sorte de template modifiable pour afficher un menu
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
// Nom de la fonction   : Template_Menu_Ligne_Haut
// Entrée / Sortie      : - / - /
// Description          : affiche la structure du menu --> partie du haut
// Date modfification   : le 25.02.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Menu_Ligne_Haut(void)
{
    //--- déclaration de variable interne ---//
    char i;

    //--- boucle pour afficher x caractère sur une ligne ---//
    for(i = 0; i < MAX_CARA; i++)
        printf("*");

    PRINT_SAUT_LIGNE;
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Template_Menu_Ligne_Bas
// Entrée / Sortie      : - / - /
// Description          : affiche la structure du menu --> partie du haut
// Date modfification   : le 25.02.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Menu_Ligne_Bas(void)
{
    //--- déclaration de variable interne ---//
    char i;

    //--- boucle pour afficher x caractère sur une ligne ---//
    for(i = 0; i < MAX_CARA; i++)
        printf("*");

    PRINT_SAUT_LIGNE;
}


//----------------------------------------------------------------------------------//
// Nom de la fonction   : Template_Choix_Menu
// Entrée / Sortie      : - / - /
// Description          : affiche le choix du menu pour l'utilisateur
// Date modfification   : le 23.03.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Choix_Menu(void)
{
    //--- déclaration propre à la fonction ---//
    //char var_choix_menu;

    printf("[1] %s", NAME_M_ARITHEMTIQUE);
    PRINT_SAUT_LIGNE;
    printf("[2] ... \n");
    printf("[3] ... \n");
    printf("[4] ... \n");
    printf("[Q] --- help ---\n");
    printf("[E] --- fermer le programme ---");

    //return
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Template_Choix_Menu_Arithmetique
// Entrée / Sortie      : - / - /
// Description          : affiche le choix du menu arithmétique
// Date modfification   : le 23.03.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Template_Choix_Menu_Arithmetique()
{
    printf("Vous êtes dans le menu: %s", NAME_M_ARITHEMTIQUE);
    PRINT_SAUT_LIGNE;

    printf("[1] ...");
    PRINT_SAUT_LIGNE;
    printf("[2] ... \n");
    printf("[3] ... \n");
    printf("[4] ... \n");
    printf("[Q] --- help ---\n");
    printf("[E] --- fermer le programme ---");

    //PRINT_SELECTION_MENU;
}




//----------------------------------------------------------------------------------//
// Nom de la fonction   : Help_Printf
// Entrée / Sortie      : - / - /
// Description          : on affiche quelques régles avec le printf
// Date modfification   : le 25.02.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Help_Printf(void)
{
    //--- Notion du "Printf" --> permet l'affichage dans une console ---//
    printf("=> le printf : permet d'afficher du texte dans une console \n");
    printf("-> le \\n permet un retour a la ligne \n");
    printf("-> pour afficher un entier on utilise %%d \npour afficher une valeur en hexa %%x \n");
    printf("-> pour un nombe a virgule on utilise %%f et pour notation scientifique on utilise %%E \n");
    printf("-> pour aligner des nombres entier %%min.maxd definit les nb de caractere + un signe - devant le ");
    printf("   permet d'aligner a gauche \n");
    printf("-> pour des nombres flottants %%car_total.chiffre_A_virgf définit les caracteres totaux a afficer");
    printf("   le nombre apres la virgule ");
    printf("-> et pour afficher un caractere %%c \n\n");
}
