#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "functions.h"

int main()
{
    character *perso = malloc(sizeof(*perso));
    perso->name = malloc(strlen("Michel") * sizeof(char));
    perso->name = strcpy(perso->name, "Michel");
    perso->strength = 100;
    perso->intelligence = 200;
    perso->wisdom = 0;
    perso->agility = 150;
    perso->endurance = 75;
    printf("Le héro de notre histoire s'appelle %s. Sa force est de %d, son intelligence de %d, sa sagesse de %d, sont agilité de %d et son endurance de %d.\n", perso->name, perso->strength, perso->intelligence, perso->wisdom, perso->agility, perso->endurance);
    free(perso->name);
    free(perso);
    exit(0);
}