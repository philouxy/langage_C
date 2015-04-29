//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: calcul_entier.c
// Date de création 	: 09.04.2015
// Date de modification : 29.04.2015
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
//                        incrémentation
// modification         : le 29.04.2014
// Remarque             : -
//----------------------------------------------------------------------------------//
void Astuce_Calcul(void)
{
    //--- déclaration de variable interne ---//
    char val_exemple;

    //--- demander à l'utilisateur de taper un nombre ---//
    //PRINT_SELECTION_NB;

    //--- récuperation de la valeur ---//
    val_exemple = Selection_Menus('V');

    //--- transformation de la valeur type char en decimal ---//
    val_exemple -= NB_CONV_CHAR_VIA_DEC;

    //--- incrémentation ---//
    printf("\n\npost incrementation - phenomene \n x = %d", val_exemple);             //12
    printf("\n x++ = %d => x = %d", val_exemple++, val_exemple);                            //12 --> 13
    printf("\npre incrementation - phenomene \n x = %d", val_exemple);                //13
    printf("\n --x = %d => x = %d ", --val_exemple, val_exemple);                           //12 --> 12
    printf("\nincrementation - phenomene \n x++ = %d", val_exemple++);                //12
    printf("\nincrementation - phenomene \n x = x++ = %d", val_exemple = val_exemple++);    //13
    printf("\n x = %d", val_exemple);                                                 //14

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

    //--- incrémentation ---//
    printf("\n\npost incrementation - phenomene \n x = %d", val_x);             //12
    printf("\n x++ = %d => x = %d", val_x++, val_x);                            //12 --> 13
    printf("\npre incrementation - phenomene \n x = %d", val_x);                //13
    printf("\n --x = %d => x = %d ", --val_x, val_x);                           //12 --> 12
    printf("\nincrementation - phenomene \n x++ = %d", val_x++);                //12
    printf("\nincrementation - phenomene \n x = x++ = %d", val_x = val_x++);    //13
    printf("\n x = %d", val_x);                                                 //14

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
