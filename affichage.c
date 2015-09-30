//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: affichage.c
// Date de création 	: 30.09.2015
// Date de modification : XX.XX.2015
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : fichier comportant différentes fonctions pour permettre des
//                        effets visuelles
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
#include "display.h"

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Triangle_Etoile_AGB
// Entrée / Sortie      : - / - /
// Description          : affiche un triangle rectangle selon le choix du user
// Date modfification   : le 09.09.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Triangle_Etoile_AGB(void)
{
    //--- déclaration de variable interne ---//
    int c, l;       // c = colonne || l = ligne
    int val_user;

    val_user = Select_Var_Entier();

    for(l = 0; l < val_user; l++)
    {
        for(c = 0; c <= l ; c++)
            PRINT_ETOILE;

        PRINT_SAUT_LIGNE;
    }

}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Triangle_Etoile_ADB
// Entrée / Sortie      : - / - /
// Description          : affiche un triangle rectangle selon le choix du user
// Date modfification   : le 09.09.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Triangle_Etoile_ADB(void)
{
    //--- déclaration de variable interne ---//
    int c, c_e, l;       // c = colonne || l = ligne || c_e = colonne étoile
    int val_user;

    val_user = Select_Var_Entier();

    for(l = 0; l < val_user; l++)
    {
        for(c = l; c < val_user ; c++)
        {
            if (c < (val_user -1))
                PRINT_ESPACE;
            else
            {
                for(c_e = c; c_e < val_user; c_e++)
                    PRINT_ETOILE;
            }
        }
        PRINT_SAUT_LIGNE;
    }
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Triangle_Etoile_AGH
// Entrée / Sortie      : - / - /
// Description          : affiche un triangle rectangle selon le choix du user
// Date modfification   : le 09.09.2015
// Remarque             : -
//----------------------------------------------------------------------------------//

void Triangle_Etoile_AGH(void)
{
    //--- déclaration de variable interne ---//
    int c, l;       // c = colonne || l = ligne
    int val_user;

    val_user = Select_Var_Entier();

    for(l = 0; l < val_user; l++)
    {
        for(c = l; c < val_user ; c++)
            PRINT_ETOILE;

        PRINT_SAUT_LIGNE;
    }
}
