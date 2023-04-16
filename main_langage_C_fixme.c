//-----------------------------------------------------------------------------------//
// Nom du projet 		:   Langage_C_fixme
// Nom du fichier 		:   main_langage_C_fixme.c
// Date de création 	:   25.02.2015
// Date de modification : 	16.04.2023
//
// Auteur 				: 	Philou (Ph. Bovey)
//
// Description 			: 	Selon le livre "le Langage C" - Auteur : Tony Zhang
//                          reprise des exercies du livres et adapter ceux-ci
//                          pour faire un programme complet et ainsi voir différents
//                          aspects du C
//
// Remarques			:   lien pour la table ASCII :
//                          http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//--- Librairie utilisées ---//
//--- Standart ---//
#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>                 // pour les fonctions systèmes

//--- Perso ---//
#include "display.h"

//--- définition ---//
#define VERSION_PROG  0.2


//--- Programme personalisé ---//
int main()
{
    //--- déclaration de variables interne à la fonction main ---//
    char var_retour;                            // initialise la variable de retour

    e_infoMenus choixMenuUser = m_principal;    // choix du menu principal
    e_selectionMSG selectionUser = select_menu; // choix du type de selection (menu - sousmenu - valeur)

    //--- Message de bienvenue ---//
    printf("--- Fixme - Projet en C - Version %2.1f ---", VERSION_PROG);
    PRINT_SAUT_LIGNE;

    //--- tant que l'utilisateur n'est pas sorti en tapant sur 'E' on reste dans la boucle ---//
    do{
        //--- structure du menu ---//
        Template_Menu_Ligne();
        Template_Display_Menu(choixMenuUser);
        PRINT_SAUT_LIGNE;
        PRINT_SAUT_LIGNE;
        var_retour = Selection_Menus(selectionUser);

        var_retour -= CST_CONVASCII_NUM;

        //-- MAJ des menus Principaux --//
        switch ((e_infoMenus)var_retour)
        {
            case m_arithmetique:
                choixMenuUser = m_arithmetique;
            break;

            case m_affichage:
                choixMenuUser = m_affichage;
            break;

            case m_astuceLoop:
                choixMenuUser = m_astuceLoop;
            break;

            case m_astucePrint:
                choixMenuUser = m_astucePrint;
            break;

            case m_astuceMemory:
                choixMenuUser = m_astuceMemory;
            break;

            case m_principal :
            default:
                choixMenuUser = m_principal;
            break;
        }


        PRINT_SAUT_LIGNE;
        DELETE_SCREEN;

    }while(var_retour != CHOIX_EXIT);

    return 0;
}
