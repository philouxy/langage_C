//-----------------------------------------------------------------------------------//
// Nom du projet 		  :	      Langage_C_fixme
// Nom du fichier 		:       main_langage_C_fixme.c
// Date de création 	:       24.09.2013
// Date de modification : 	  06.01.2015
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
#include <stdio.h>                  // entrée - sortie
#include <string.h>


//--- Programme personalisé ---//
int main()
{
    //--- Message de bienvenue ---//
    printf("--- Fixme - Exercices en C ! ---");

    //--- Notion du "Printf" --> permet l'affichage dans une console ---//
    printf("le printf : permet d'afficher du texte dans une console \n");
    printf("-> le \\n permet un retour a la ligne \n");
    printf("-> pour afficher un entier on utilise %%d \npour afficher une valeur en hexa %%x \n");
    printf("-> pour un nombe a virgule on utilise %%f et pour notation scientifique on utilise %%E \n");
    printf("-> pour aligner des nombres entier %%min.maxd definit les nb de caractere + un signe - devant le ");
    printf("permet d'aligner a gauche \n");
    printf("-> pour des nombres flottants %%car_total.chiffre_A_virgf définit les caracteres totaux a afficer");
    printf("le nombre apres la virgule ");
    printf("-> et pour afficher un caractere %%c \n\n");

    return 0;
}

