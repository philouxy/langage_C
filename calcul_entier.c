//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: calcul_entier.c
// Date de création 	: 09.04.2015
// Date de modification : 12.05.2015
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : fichier comportant différentes fonctions arithmetiques avec des
//                        éléments entiers
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//
//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie
#include <string.h>

//--- librairie perso ---//
#include "arithmetique.h"
#include "display.h"


//----------------------------------------------------------------------------------//
// Nom de la fonction   : Astuce_Calcul
// Entrée / Sortie      : - / - / -
// Description          : montre différent mode d'affichage avec le mode d
//                        incrémentation et decrementation
// modification         : le 08.05.2014
// Remarque             : -
//----------------------------------------------------------------------------------//
void Astuce_Calcul(void)
{
    //--- déclaration de variable interne ---//
    char val_exemple;

    //--- récuperation de la valeur ---//
    val_exemple = Selection_Menus('V');

    //--- incrémentation ---//
    PRINT_SAUT_LIGNE;
    PRINT_SAUT_LIGNE;
    Template_Menu_Ligne();
    printf("--- PHENOMENE D'INCREMENTATION ET DE DECREMENTATION ---");
    PRINT_SAUT_LIGNE;
    Template_Menu_Ligne();
    PRINT_SAUT_LIGNE;
    PRINT_SAUT_LIGNE;
    printf("-> NB = %d ", val_exemple);
    PRINT_SAUT_LIGNE;
    printf("-> NB++ = %d ", val_exemple++);
    printf(" la valeur ne change pas !!!");
    PRINT_SAUT_LIGNE;
    printf("-> Rappel NB = %d ", val_exemple);
    printf(" la valeur a change cette fois, on parle de post incrementation !!!");
    PRINT_SAUT_LIGNE;
    printf("-> NB-- = %d ", val_exemple--);
    printf(" la valeur ne change pas !!!");
    PRINT_SAUT_LIGNE;
    printf("-> Rappel NB = %d ", val_exemple);
    printf(" la valeur a change cette fois, on parle de post decrementation !!!");
    PRINT_SAUT_LIGNE;
    PRINT_SAUT_LIGNE;
    printf("-> NB = %d", val_exemple);
    PRINT_SAUT_LIGNE;
    printf("-> ++NB = %d ", ++val_exemple);
    printf(" la valeur change directement, on parle de pre incrementation !!!");
    PRINT_SAUT_LIGNE;
    printf("-> --NB = %d ", --val_exemple);
    printf(" la valeur change directement, on parle de pre decrementation !!!");
    PRINT_SAUT_LIGNE;
    PRINT_SAUT_LIGNE;
    printf("Valeur Initialee = %d", val_exemple);
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Addition
// Entrée / Sortie      : choix_option / - / -
// Description          : montre différent mode d'affichage avec le mode d
//                        incrémentation et decrementation
// modification         : le 12.05.2014
// Remarque             : -
//----------------------------------------------------------------------------------//
void Addition(char choix_option)
{
    //--- déclaration de variables ---//
    int var1, var2;

    //--- test selon le choix de l'utilisateur que 2 possibilité ----//
    if(choix_option == CHOIX_ENTIER)
    {
        PRINT_SELECTION_NB;
        var1 = Select_Var_Entier();
        PRINT_SELECTION_NB;
        var2 = Select_Var_Entier();
        PRINT_SAUT_LIGNE;
        PRINT_SAUT_LIGNE;
        printf("L'adition vaut X + Y  = %d + %d = %d",var1, var2, (var1 + var2));
    }
    else
    {
        PRINT_SAUT_LIGNE;
        printf("!!! PAS ENCORE IMPLEMENTER !!!");
    }
}


//----------------------------------------------------------------------------------//
// Nom de la fonction   : pemier_calcul
// Entrée / Sortie      : val_x / val_y
// Description          : calculs simple de plusieurs expressions mathématiques
//                        addition / soustraction / mulptiplication entre deux
//                        variables externes ou internes
// modification         : le 09.04.2014
// Remarque             : -
//----------------------------------------------------------------------------------//
int pemier_calcul(int val_x)
{
    //--- constantes ---//
    const int VAL_CONST = 5;

    //--- variables ---//
    int var_int_x = 1;
    int var_int_y = 3;
    int res_int;

    //--- afficher plusieurs opération arithmétique simple en mode raccoucis ---//
    printf("\n\naddition entre x et y      : %d",var_int_x += var_int_y);         // afficher 4
    printf("\naddition entre x et -y       : %d",var_int_x += -var_int_y);        // afficher 1
    printf("\nsoustraction entre x et y    : %d",var_int_x -= var_int_y);         // afficher -2
    printf("\nsoustraction entre x et -y   : %d",var_int_x -= -var_int_y);        // afficher 1
    printf("\nmultiplication entre x et y  : %d",var_int_x *= var_int_y);         // afficher 3
    printf("\nmultiplication entre x et -y : %d",var_int_x *= -var_int_y);        // afficher -9

    //--- tests sur la priorité des opérateurs ---//
    var_int_x = 3;                                        // nouvelle affectation
    var_int_y = 6;

    res_int = var_int_x * var_int_y == 18;                // le résultat sera binaire
    printf("\n\nEst-ce que : %d * %d vaut 18 ", var_int_x, var_int_y);
    if (res_int != 1)
        printf("\n\nPas de correspondance !!! \n ");
    else
        printf("\nEquivalent !!! \n ");

    //--- calcul simple avec retour de la valeur---//
    return(val_x * VAL_CONST);
}
