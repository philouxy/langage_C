//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: affichage.c
// Date de création 	: 30.09.2015
// Date de modification : 19.11.2015
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
// Entrée / Sortie      : nb_etoile / - /
// Description          : affiche un triangle rectangle selon le choix du user
// Date modfification   : le 19.11.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Triangle_Etoile_AGB(int nb_etoile)
{
    //--- déclaration de variable interne ---//
    int c, l;       // c = colonne || l = ligne

    for(l = 0; l < nb_etoile; l++)
    {
        for(c = 0; c <= l ; c++)
            PRINT_ETOILE;

        PRINT_SAUT_LIGNE;
    }

}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Triangle_Etoile_ADB
// Entrée / Sortie      : nb_etoile / - /
// Description          : affiche un triangle rectangle selon le choix du user
// Date modfification   : le 19.11.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Triangle_Etoile_ADB(int nb_etoile)
{
    //--- déclaration de variable interne ---//
    int c, c_e, l;       // c = colonne || l = ligne || c_e = colonne étoile

    for(l = 0; l < nb_etoile; l++)
    {
        for(c = l; c < nb_etoile ; c++)
        {
            if (c < (nb_etoile -1))
                PRINT_ESPACE;
            else
            {
                for(c_e = c; c_e < (nb_etoile + l); c_e++)
                    PRINT_ETOILE;
            }
        }
        PRINT_SAUT_LIGNE;
    }
}
//for(c_e = c; c_e < (val_user + c); c_e++)


//----------------------------------------------------------------------------------//
// Nom de la fonction   : Triangle_Etoile_AGH
// Entrée / Sortie      : nb_etoile / - /
// Description          : affiche un triangle rectangle selon le choix du user
// Date modfification   : le 19.11.2015
// Remarque             : -
//----------------------------------------------------------------------------------//
void Triangle_Etoile_AGH(int nb_etoile)
{
    //--- déclaration de variable interne ---//
    int c, l;       // c = colonne || l = ligne

    for(l = 0; l < nb_etoile; l++)
    {
        for(c = l; c < nb_etoile ; c++)
            PRINT_ETOILE;

        PRINT_SAUT_LIGNE;
    }
}

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Triangle_Etoile_AGH
// Entrée / Sortie      : nb_etoile / - /
// Description          : affiche un triangle rectangle selon le choix du user
// Date modfification   : le 11.11.2015
// Remarque             : en commentaire une deuxième variente
//----------------------------------------------------------------------------------//
void Triangle_Etoile_ADH(int nb_etoile)
{
    //--- déclaration de variable interne ---//
    int c, c_e, l;       // c = colonne || l = ligne || c_e = colonne étoile

    for(l = 0; l < nb_etoile; l++)
    {
        for(c = l; c >= 0 ; c--)
        {
            if(c < 1)
            {
                for(c_e = l; c_e < nb_etoile; c_e++)
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

//----------------------------------------------------------------------------------//
// Nom de la fonction   : Choix_Emplacement_Triangle
// Entrée / Sortie      : choix_HB, choix_GD / - /
// Description          : permet de choisir quel triangle on veut afficher en
//                        fonction du choix utilisateur
// Date modfification   : le 19.11.2015
// Remarque             :
//----------------------------------------------------------------------------------//
void Choix_Emplacement_Triangle(char choix_HB, char choix_GD)
{
    //--- déclaration de variable ---//
    int choix_val;

    choix_val = Select_Var_Entier();

    if(choix_HB == CHOIX_HAUT)
    {
        if(choix_GD == CHOIX_GAUCHE)
            Triangle_Etoile_AGH(choix_val);
        else
            Triangle_Etoile_ADH(choix_val);
    }
    else
    {
        if(choix_GD == CHOIX_DROITE)
            Triangle_Etoile_ADB(choix_val);
        else
            Triangle_Etoile_AGB(choix_val);
    }
}

