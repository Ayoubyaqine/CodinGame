/*
    Objectif :
    Écrire un programme permettant de détruire les montagnes pour pouvoir atterrir.
    Pour cela, tirer sur la montagne la plus haute.

    Règles :
    - Au début de chaque tour de jeu, vous recevez en entrée la hauteur de chaque montagne (8 montagnes).
    - Vous devez déterminer et indiquer l'indice de la montagne la plus haute.
    - Tirer sur une montagne ne la détruit pas complètement, seulement une partie.
    - Le vaisseau descend après chaque tour.

    Conditions de victoire :
    - Vous gagnez si vous détruisez la montagne la plus haute à chaque tour.

    Conditions de défaite :
    - Le vaisseau percute une montagne.
    - Vous fournissez une sortie invalide ou votre programme ne répond pas à temps.

    Entrées :
    - 8 lignes : un entier `mountainH` par ligne représentant la hauteur d'une montagne.
    - Les hauteurs sont données dans l'ordre de leur index (allant de 0 à 7).

    Sortie :
    - Une unique ligne contenant l'indice de la montagne à détruire.

    Contraintes :
    - 0 ≤ mountainH ≤ 9
    - Temps de réponse pour un tour ≤ 100ms
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{

    while (1) {
        int max_value = 0;
        int max_indice =0;
        for (int i = 0; i < 8; i++) {
            int mountain_h;
            scanf("%d", &mountain_h);
            if (mountain_h>max_value)
            {
                max_value = mountain_h;
                max_indice=i;
            }
        }

        printf("%d\n",max_indice); 
    }

    return 0;
}