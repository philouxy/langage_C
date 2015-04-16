//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: selection_user.c
// Date de création 	: 16.04.2015
// Date de modification : xx.04.2015
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : fichier comportant différentes fonctions permettant de
//                        charger des valeurs de l'utilisateur
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
#include "display.h"

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Selection_Menus
// Entrée / Sortie      : - / -
// Description          : affiche un message pour que lutilisateur entre une valeur
// modification         : le 16.04.2014
// Remarque             : -
//----------------------------------------------------------------------------------//
char Selection_Menus(void)
{
    //--- declaration de variable local ---//
    char var_retour;

    //--- selection du menu par le user ---//
    PRINT_SELECTION_MENU;

    //--- lire le caractère saisi ---//
    var_retour = getchar();

    //--- vide le buffer de saisie de clavier ---//
    while(getchar() != '\n');

    return var_retour;
}

