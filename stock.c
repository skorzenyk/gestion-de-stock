#include <stdio.h>
#include <string.h>
#include "stock.h"


void ajouterProduit(Produit stock[], int *nbProduits) {
    Produit nouveauProduit;

    printf("Code du produit : ");
    scanf("%d", &nouveauProduit.code);
    printf("Nom du produit : ");
    scanf("%s", nouveauProduit.nom);
    printf("Quantite : ");
    scanf("%d", &nouveauProduit.quantite);
    printf("Prix : ");
    scanf("%f", &nouveauProduit.prix);

    stock[*nbProduits] = nouveauProduit;
    (*nbProduits)++;
    printf("Produit ajoute avec succes.\n");
}

void afficherStock(Produit stock[], int nbProduits) {
    printf("\n===== STOCK ACTUEL =====\n");
    int i;
    for (i = 0; i < nbProduits; i++) {
        printf("Code : %d, Nom : %s, Quantite : %d, Prix : %.2f\n",
               stock[i].code, stock[i].nom, stock[i].quantite, stock[i].prix);
    }
}

void rechercherProduit(Produit stock[], int nbProduits) {
    int codeRecherche;
    printf("Entrez le code du produit a rechercher : ");
    scanf("%d", &codeRecherche);
    int i;
    for (i = 0; i < nbProduits; i++) {
        if (stock[i].code == codeRecherche) {
            printf("Produit trouve : Code : %d, Nom : %s, Quantite : %d, Prix : %.2f\n",
                   stock[i].code, stock[i].nom, stock[i].quantite, stock[i].prix);
            return;
        }
    }

    printf("Produit non trouve.\n");
}

void modifierProduit(Produit stock[], int nbProduits) {
    int codeModification;
    printf("Entrez le code du produit a modifier : ");
    scanf("%d", &codeModification);
    int i;
    for (i = 0; i < nbProduits; i++) {
        if (stock[i].code == codeModification) {
            printf("Nouveau nom du produit : ");
            scanf("%s", stock[i].nom);
            printf("Nouvelle quantite : ");
            scanf("%d", &stock[i].quantite);
            printf("Nouveau prix : ");
            scanf("%f", &stock[i].prix);
            printf("Produit modifie avec succes.\n");
            return;
        }
    }

    printf("Produit non trouve.\n");
}

void supprimerProduit(Produit stock[], int *nbProduits) {
    int codeSuppression;
    printf("Entrez le code du produit a supprimer : ");
    scanf("%d", &codeSuppression);
    int i;
    for (i = 0; i < *nbProduits; i++) {
        if (stock[i].code == codeSuppression) {
            int j;
            for (j = i; j < *nbProduits - 1; j++) {
                stock[j] = stock[j + 1];
            }
            (*nbProduits)--;
            printf("Produit supprime avec succes.\n");
            return;
        }
    }

    printf("Produit non trouve.\n");
}