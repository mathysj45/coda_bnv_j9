#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main()
{
    character perso;
    perso.name = "Michel";
    perso.strength = 100;
    perso.intelligence = 200;
    perso.wisdom = 0;
    perso.agility = 150;
    perso.endurance = 75;
    printf("Le héro de notre histoire s'appelle %s. Sa force est de %d, son intelligence de %d, sa sagesse de %d, sont agilité de %d et son endurance de %d.\n", perso.name, perso.strength, perso.intelligence, perso.wisdom, perso.agility, perso.endurance);
    exit(0);
}