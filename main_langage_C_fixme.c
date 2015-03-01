//-----------------------------------------------------------------------------------//
// Nom du projet 		:   Langage_C_fixme
// Nom du fichier 		:   main_langage_C_fixme.c
// Date de création 	:   25.02.2015
// Date de modification : 	01.03.2015
//
// Auteur 				: 	Philou (Ph. Bovey)
//
// Description 			: 	Selon le livre "le Langage C" - Auteur : Tony Zhang
//                          Reprise des Exercies du livres et adapter ceux-ci
//                          pour faire un programme complet et aisni voirdifférents
//                          aspects du C
//
// Remarques			:   lien pour la table ASCII :
//                          http://www.asciitable.com/
//                          lien pour la saisie de clavier avec getc & getchar pour ne pas
//                          avoir des erreurs d'interprétation
//                          http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
//                          lien vers différents
//                          http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//--- Librairie utilisées ---//
//--- Standart ---//
#include <stdio.h>                  // entrée - sortie
#include <string.h>

//--- Perso ---//
#include "display.h"

//--- définition ---//
#define VERSION_PROG  1


//--- Programme personalisé ---//
int main()
{
    //--- Message de bienvenue ---//
    printf("--- Fixme - Projet en C - Version %d ---", VERSION_PROG);
    PRINT_SAUT_LIGNE

    //--- structure du menu ---//
    Template_Menu_Ligne_Haut();
    Template_Choix_Menu();

    PRINT_SAUT_LIGNE
    //Help_Printf();

    //--- structure du menu ---//
    Template_Menu_Ligne_Bas();

    return 0;
}
