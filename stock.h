#ifndef STOCK_H
#define STOCK_H

// Structure représentant un produit
typedef struct {
    int code;
    char nom[50];
    int quantite;
    float prix;
} Produit;

// Prototypes des fonctions
void afficherMenu();
void ajouterProduit(Produit stock[], int *nbProduits);
void afficherStock(Produit stock[], int nbProduits);
void rechercherProduit(Produit stock[], int nbProduits);
void modifierProduit(Produit stock[], int nbProduits);
void supprimerProduit(Produit stock[], int *nbProduits);

#endif
