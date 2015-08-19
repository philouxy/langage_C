//-----------------------------------------------------------------------------------//
// Nom du projet 		: Langage_C_fixme
// Nom du fichier 		: arithmetique.h
// Date de création 	: 09.04.2015
// Date de modification : 19.08.06.2015
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description : fichier de type header file pour toutes les fonctions
//               liées aux calculs
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//
#ifndef ARITHMETIQUE_H_INCLUDED
#define ARITHMETIQUE_H_INCLUDED

//--- constante ou définition ---//
#define CHAR_RETOUR_CHARIOT     '\n'      // caractère spécial représentant un retour de ligne
#define DEBUT_CHAR              65        // correspond a la lettre 'A'
#define NB_ALPHABETE            24        // nombre de caractère dans l'alphabet
#define DEBUT_NUM               48        // correspond au caractère '0'
#define SAUT_MAJ_MIN            32        // différence entre les caractères majuscule et minuscule -><-


//--- déclaration de prototype ---//
//--- fonctions liées au fichier : calcul_entier.c ---//
void Astuce_Calcul(void);                   //-> affiche des exemples d'incrémentation
void Addition(char choix_option);           //-> affiche une addition pour le user (entier ou flottant)
void Soustraction(char choix_option);       //-> affiche la soustraction de deux nombre choisi par l'utilisateur
void Multiplication(char choix_option);     //-> affiche la multiplication de deux nombre choisi par l'utilisateur
void Division(char choix_option);           //-> affiche la division de deux nombre choisi par l'utilisateur

int pemier_calcul(int val_x);

//--- fonctions liées au fichier : conversions.c ---//
void Conv_Char_Num(char var_char);          //-> converti un caractère en valeur numérique
void Conv_Num_Char(int var_int);            //-> converti un nombre en caractère
void Conv_Num_Oct_Hex(int var_int);         //-> converti un nombre en octal et en hexa
void Astuce_ASCII(void);                    //-> montre toutes les valeurs des caractères

#endif // ARITHMETIQUE_H_INCLUDED
