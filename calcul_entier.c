//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: calcul_entier.c
// Date de création 	: 09.04.2015
// Date de modification : 09.09.2015
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
// modification         : le 19.06.2014
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
// Entrée / Sortie      : - / - / -
// Description          : Addition de deux variables + affichage en mode entier en
//                        flottant
// modification         : le 09.09.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Addition(void)
{
    //--- déclaration de variables ---//
    int     var_i_1, var_i_2;
    float   var_f_1, var_f_2;

    var_f_1 = Select_Var_Flottant();
    var_f_2 = Select_Var_Flottant();
    var_i_1 = (int)var_f_1;             //caster une valeur de flottante en valeur entière
    var_i_2 = (int)var_f_2;             //caster une valeur de flottante en valeur entière
    PRINT_SAUT_LIGNE;
    PRINT_SAUT_LIGNE;
    printf("adition mode affichage entier :        X + Y  = %d + %d = %d",var_i_1, var_i_2, (var_i_1 + var_i_2));
    PRINT_SAUT_LIGNE;
    printf("meme addition - ecriture differente :  X += Y ou X = X + Y: %d",var_i_1 += var_i_2);
    PRINT_SAUT_LIGNE;
    printf("adition mode affichage flottant :      X + Y  = %f + %f = %f",var_f_1, var_f_2, (var_f_1 + var_f_2));
    PRINT_SAUT_LIGNE;
    printf("meme addition - ecriture differente :  X += Y ou X = X + Y: %f",var_f_1 += var_f_2);
    //--- réinitialiser la valeur de X ---//
    var_f_1 -= var_f_2;
    PRINT_SAUT_LIGNE;
    printf("adition notation scientifique :        X + Y  = %4.1e + %4.1e = %4.1e",var_f_1, var_f_2, (var_f_1 + var_f_2));
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Soustraction
// Entrée / Sortie      : choix_option / - / -
// Description          : Soustraction de deux variable + affichage en mode entier en
//                        flottant
// modification         : le 09.09.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Soustraction(void)
{
    //--- déclaration de variables ---//
    int   var_i_1, var_i_2;
    float var_f_1, var_f_2;

    var_f_1 = Select_Var_Flottant();
    var_f_2 = Select_Var_Flottant();
    var_i_1 = (int)var_f_1;             //caster une valeur de flottante en valeur entière
    var_i_2 = (int)var_f_2;             //caster une valeur de flottante en valeur entière
    PRINT_SAUT_LIGNE;
    PRINT_SAUT_LIGNE;
    printf("soustraction mode affichage entier :      X - Y  = %d - %d = %d",var_i_1, var_i_2, (var_i_1 - var_i_2));
    PRINT_SAUT_LIGNE;
    printf("meme soustraction - ecriture differente : X -= Y ou X = X - Y: %d",var_i_1 -= var_i_2);
    PRINT_SAUT_LIGNE;
    printf("soustraction mode affichage flottant :    X - Y  = %f - %f = %f",var_f_1, var_f_2, (var_f_1 - var_f_2));
    PRINT_SAUT_LIGNE;
    printf("meme soustraction - ecriture differente : X -= Y ou X = X - Y: %f",var_f_1 -= var_f_2);
    //--- réinitialiser la valeur de X ---//
    var_f_1 += var_f_2;
    PRINT_SAUT_LIGNE;
    printf("sosutraction notation scientifique :      X - Y  = %4.1e - %4.1e = %4.1e",var_f_1, var_f_2, (var_f_1 - var_f_2));
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Multiplication
// Entrée / Sortie      : choix_option / - / -
// Description          : Multiplication de deux variables + affichage en mode entier en
//                        flottant
// modification         : le 09.09.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Multiplication(void)
{
    //--- déclaration de variables ---//
    int   var_i_1, var_i_2;
    float var_f_1, var_f_2;

    var_f_1 = Select_Var_Flottant();
    var_f_2 = Select_Var_Flottant();
    var_i_1 = (int)var_f_1;             //caster une valeur de flottante en valeur entière
    var_i_2 = (int)var_f_2;             //caster une valeur de flottante en valeur entière
    PRINT_SAUT_LIGNE;
    PRINT_SAUT_LIGNE;
    printf("multiplication mode affichage emtier :      X * Y  = %d * %d = %d",var_i_1, var_i_2, (var_i_1 * var_i_2));
    PRINT_SAUT_LIGNE;
    printf("meme multiplication - ecriture differente : X *= Y ou X = X * Y: %d",var_i_1 *= var_i_2);
    PRINT_SAUT_LIGNE;
    printf("multiplication en mode affichage flottant : X * Y  = %f * %f = %f",var_f_1, var_f_2, (var_f_1 * var_f_2));
    PRINT_SAUT_LIGNE;
    printf("meme multiplication - ecriture differente : X *= Y ou X = X * Y: %f",var_f_1 *= var_f_2);
    //--- réinitialiser la valeur de X ---//
    var_f_1 /= var_f_2;
    PRINT_SAUT_LIGNE;
    printf("multiplication notation scientifique :      X * Y  = %4.1e * %4.1e = %4.1e",var_f_1, var_f_2, (var_f_1 * var_f_2));
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Division
// Entrée / Sortie      : choix_option / - / -
// Description          : Division de deux variables + affichage en mode entier en
//                        flottant
// modification         : le 09.09.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Division(void)
{
    //--- déclaration de variables ---//
    int     var_i_1, var_i_2;
    float   var_f_1, var_f_2;

    var_f_1 = Select_Var_Flottant();
    var_f_2 = Select_Var_Flottant();
    var_i_1 = (int)var_f_1;             //caster une valeur de flottante en valeur entière
    var_i_2 = (int)var_f_2;             //caster une valeur de flottante en valeur entière
    PRINT_SAUT_LIGNE;
    PRINT_SAUT_LIGNE;
    printf("division mode affichage entier :          X / Y  = %d / %d = %d",var_i_1, var_i_2, (var_i_1 / var_i_2));
    PRINT_SAUT_LIGNE;
    printf("meme soustraction - ecriture differente : X /= Y ou X = X / Y: %d",var_i_1 /= var_i_2);
    PRINT_SAUT_LIGNE;
    printf("divsion mode affichage flottant :         X / Y  = %f / %f = %f",var_f_1, var_f_2, (var_f_1 / var_f_2));
    PRINT_SAUT_LIGNE;
    printf("meme soustraction - ecriture differente : X /= Y ou X = X / Y: %f",var_f_1 /= var_f_2);
    //--- réinitialiser la valeur de X ---//
    var_f_1 *= var_f_2;
    PRINT_SAUT_LIGNE;
    printf("division notation scientifique :          X / Y  = %4.1e / %4.1e = %4.1e",var_f_1, var_f_2, (var_f_1 / var_f_2));
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
