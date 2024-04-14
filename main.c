#include <stdio.h>
#include "stock.h"
#include "menu.h"

#define MAX_PRODUITS 100

int main() {
    Produit stock[MAX_PRODUITS];
    int nbProduits = 0;
    int choix;

    do {
        afficherMenu();
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterProduit(stock, &nbProduits);
                break;
            case 2:
                afficherStock(stock, nbProduits);
                break;
            case 3:
                rechercherProduit(stock, nbProduits);
                break;
            case 4:
                modifierProduit(stock, nbProduits);
                break;
            case 5:
                supprimerProduit(stock, &nbProduits);
                break;
            case 6:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }
    } while (choix != 6);

    return 0;
}