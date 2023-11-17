#include "stdio.h"
#include  "stdlib.h"
#include  "stdbool.h"

typedef struct bloc{
    int element;
    struct bloc *filsGauche , *filsDroite;
} Noeud;

// declaration et initialisation manuel d'un noeud

Noeud* init_noeud(int val, Noeud *G, Noeud *D);

// parcours de l'arbre

int main(int argc, char **argv)
{
    printf("Bonjour je suis un Millionnaire");
    return 0;
}