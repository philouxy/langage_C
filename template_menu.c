//-----------------------------------------------------------------------------------//
// Nom du projet 		:   Langage_C_fixme
// Nom du fichier 		:   template_menu.c
// Date de création 	:   25.02.2015
// Date de modification : 	19.08.2015
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
// Date modfification   : le 17.06.2015
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
            var_retour = Selection_Menus('M');
            Template_Display_Menu_Arithm(var_retour);
            PRINT_SAUT_LIGNE;
        break;

        case('A'):
            printf("%s", NAME_M_ASTUCE_PRINTF);
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
// Date modfification   : le 17.06.2015
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
    printf("[A] --- %s ---", NAME_M_ASTUCE_PRINTF);
    PRINT_SAUT_LIGNE;
    printf("[Q] --- help ---\n");
    printf("[E] --- fermer le programme ---");

    //return
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Help_Printf
// Entrée / Sortie      : - / - /
// Description          : on affiche quelques régles avec le printf
// Date modfification   : le 18.07.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Help_Printf(void)
{
    //--- déclaration de variable interne ---//
    char var_test = 'A';
    float var_test2 = 3452.10;
    int puissance = 5;
    int i, val;

    //--- Notion du "Printf" --> permet l'affichage dans une console ---//
    printf("-> fct ""PRINTF()"" : permet d'afficher du texte dans une console \n");
    printf("-> le \\n permet un retour a la ligne \n");
    printf("-> pour afficher un caractere on utilise %%c \n");
    printf("-> pour afficher un entier on utilise %%d \n");
    printf("-> pour afficher une valeur en hexa on utilise %%x \n");
    PRINT_SAUT_LIGNE;
    printf("=> Exemple 1A : la variable de test a comme caractere : %c \n", var_test);
    printf("=> Exemple 1B : la variable de test vaut en decimal : %d \n", var_test);
    printf("=> Exemple 1C : la variable de test vaut en hexa : OX%x \n", var_test);
    PRINT_SAUT_LIGNE;
    printf("-> pour afficher un nombre flottant on utilise %%f \n");
    printf("-> pour afficher un nombre en notation scientifique on utilise %%e \n");
    PRINT_SAUT_LIGNE;
    printf("REMARQUE : ecriture notation scientifique %%nb_total.Nb_ap_virgule => ex: %%3.1e \n");
    PRINT_SAUT_LIGNE;
    printf("=> Exemple 2A : la variable de test vaut : %f \n", var_test2);
    printf("=> Exemple 2B : la variable de test vaut en notation scientifique : %3.1e \n", var_test2);
    PRINT_SAUT_LIGNE;
    PRINT_SAUT_LIGNE;
    printf("-> Valeur de fin de fichier dit EOF : %d", EOF);
    PRINT_SAUT_LIGNE;
    printf("-> allignement de nombres entier %%nb_esapce+indicateur \n");
    printf("-> les signes  + & - devant le nb d'espace definit les sens d'alignement gauche ou droite \n");
    PRINT_SAUT_LIGNE;
    printf("=> Exemple 3 : allignement de nbs - de 1 a 10^5 \n");
    for(i = 0 ; i < puissance + 1 ; i++)
    {
        //--- calcul de la valeur à afficher ---//
        if(i == 0)
            val = 1;
        else
            val = val*10;

        //--- affichage de la valeur avec alignement de droite a gauche ---//
        printf("puissance %d -> %6d || %-6d", i, val, val);
        PRINT_SAUT_LIGNE;
    }

}
