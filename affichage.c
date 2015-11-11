//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: affichage.c
// Date de création 	: 30.09.2015
// Date de modification : 11.11.2015
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
// Date modfification   : le 08.10.2015
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
                for(c_e = c; c_e < (val_user + l); c_e++)
                    PRINT_ETOILE;
            }
        }
        PRINT_SAUT_LIGNE;
    }
}

//for(c_e = c; c_e < (val_user + c); c_e++)


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

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Triangle_Etoile_AGH
// Entrée / Sortie      : - / - /
// Description          : affiche un triangle rectangle selon le choix du user
// Date modfification   : le 11.11.2015
// Remarque             : en commentaire une deuxième variente
//----------------------------------------------------------------------------------//
void Triangle_Etoile_ADH(void)
{
    //--- déclaration de variable interne ---//
    int c, c_e, l;       // c = colonne || l = ligne || c_e = colonne étoile
    int val_user;

    val_user = Select_Var_Entier();

    for(l = 0; l < val_user; l++)
    {
        for(c = l; c >= 0 ; c--)
        {
            if(c < 1)
            {
                for(c_e = l; c_e < val_user; c_e++)
                    PRINT_ETOILE;
            }
            else
                PRINT_ESPACE;
        }
        PRINT_SAUT_LIGNE;
    }
}

/* ----------------------------------------------------------------------------------
--- autre solution pour la boucle interne ---
for(c = l, c_e = val_user; c_e > 0  ; c_e--){
    if(c < 1)
        PRINT_ETOILE;
    else{
        PRINT_ESPACE;
        c--;
    }
}
PRINT_SAUT_LIGNE;
---------------------------------------------------------------------------------- */

// for(c = l, c_e = (val_user - c); c_e > 0 ; c_e--, c--)

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Carre
// Entrée / Sortie      : val_user / - /
// Description          : affiche un carré plein d'étoiles
// Date modfification   : le 10.11.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Carre(int val_user)
{
    //--- déclaration de variable ---//
    int c, l;

    //--- boucle pour afficher chaque ligne ---//
    for(l = 0; l < val_user; l++)
    {
        //--- boucle pour afficher chaque colonne ---//
        for(c = 0; c < val_user; c++)
            PRINT_ETOILE;

        PRINT_SAUT_LIGNE;
    }
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Parallelogramme_AG
// Entrée / Sortie      : val_user / - /
// Description          : affiche un parallelogramme avec l'angle a gauche
// Date modfification   : le 11.11.2015
// Remarque             : on lieu de la boucle de deux boucle for imbriquée =>
//                        utilisation d'une boucle while (externe) et de la boucle
//                        do ..while pour la boucle (interne)
//----------------------------------------------------------------------------------//
void Parallelogramme_AG(int val_user)
{
    //--- déclaration de variable interne ---//
    int c, c_e, l;       // c = colonne || l = ligne || c_e = colonne étoile

    //--- initialisation de variable ---//
    l = 0;

    //--- gestion du traitement des lignes ---//
    while(l < val_user)
    {
        //--- initialisation de variables pour la 2ème boucle ---//
        c = l;
        c_e = (val_user + l);

        //--- gestion des colonnes ---//
        do
        {
           if(c < 1)
            {
                PRINT_ETOILE;
            }
            else
            {
                PRINT_ESPACE;
                c--;
            }
            c_e--;
        }while(c_e > 0);

        PRINT_SAUT_LIGNE;
        //--- incrémentation de la ligne ---//
        l++;
    }
}

/* ----------------------------------------------------------------------------------
--- autre solution mais cette fois avec des boucles for imbriquée ---
for(l = 0; l < val_user; l++){
    for(c = l, c_e = (val_user + l); c_e > 0  ; c_e--){
        if(c < 1)
            PRINT_ETOILE;
        else{
            PRINT_ESPACE;
            c--;
        }
    }
    PRINT_SAUT_LIGNE;
}
---------------------------------------------------------------------------------- */

// for(c = l, c_e = (val_user - c); c_e > 0 ; c_e--, c--)



