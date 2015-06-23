//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: conversion.c
// Date de création 	: 19.06.2015
// Date de modification : 23.06.2015
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : fichier comportant différentes fonctions de conversions
//
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
// Nom de la fonction   : Conv_Char_Num
// Entrée / Sortie      : var_char / - / -
// Description          : avec le choix de l'utilisateur sélectionnant un caractètre
//                        la fonction affiche sa valeur decimale et hexa
// modification         : le 19.06.2014
// Remarque             : -
//----------------------------------------------------------------------------------//
void Conv_Char_Num(char var_char)
{
    printf("la valeur selectionnee est '%c'", var_char);
    PRINT_SAUT_LIGNE;
    printf("conv en hexa : 0X%x", var_char);
    PRINT_SAUT_LIGNE;
    printf("conv en decimal :  %d", var_char);
    PRINT_SAUT_LIGNE;
}


//----------------------------------------------------------------------------------//
// Nom de la fonction   : Conv_Num_Char
// Entrée / Sortie      : var_int / - / -
// Description          : avec le choix de l'utilisateur sélectionnant un nombre
//                        la fonction affiche la valeur en caractère
// modification         : le 23.06.2014
// Remarque             : -
//----------------------------------------------------------------------------------//
void Conv_Num_Char(int var_int)
{
    printf("la valeur selectionnee est '%d'", var_int);
    PRINT_SAUT_LIGNE;
    printf("conv en caractere : %c", var_int);
    PRINT_SAUT_LIGNE;
}
