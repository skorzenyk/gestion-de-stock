# Gestion de Stock en Langage C

Ce projet de gestion de stock en langage C est une application simple permettant de gérer un inventaire de produits. Il comprend des fonctionnalités telles que l'ajout de nouveaux produits, l'affichage du stock actuel, la recherche de produits par code, la modification des détails d'un produit existant, et la suppression de produits du stock.

## Fonctionnalités principales :

- **Ajouter un produit :**
  - Saisir les détails d'un nouveau produit, y compris le code, le nom, la quantité et le prix.

- **Afficher le stock :**
  - Visualiser tous les produits actuellement en stock avec leurs détails.

- **Rechercher un produit :**
  - Trouver un produit en saisissant son code.

- **Modifier un produit :**
  - Mettre à jour les informations d'un produit existant, telles que le nom, la quantité ou le prix.

- **Supprimer un produit :**
  - Retirer un produit du stock en fonction de son code.

## Structure du Projet :

- **`stock.h` :**
  - Contient les déclarations des fonctions utilisées pour la gestion de stock.

- **`stock.c` :**
  - Implémente les fonctions déclarées dans `stock.h`.

- **`menu.h` :**
  - Contient la déclaration de la fonction utilisée pour l'affichage du menu.

- **`menu.c` :**
  - Implémente les fonctions déclarées dans `menu.h`.

- **`main.c` :**
  - Programme principal qui utilise les fonctions pour offrir une interface utilisateur de gestion de stock en ligne de commande.

## Utilisation :

1. Cloner le repository.
2. Compiler les fichiers source `stock.c`, `menu.c` et `main.c` ensemble pour créer l'exécutable.
**gcc -o gestion_stock stock.c menu.c main.c**
3. Exécuter le programme
**./gestion_stock**
ou
**gestion_stock**

##Conclusion

Ce projet a été développé par KEMLEYOGOTO SKORZENY, KOUNDJIBE PROSPER, KORYAM GENEVIEVE, KOUSPAREU EXAUCÉ, GANZIGOL STÉPHANE BAKELO dans le cadre d'un exercice d'apprentissage du langage C. N'hésitez pas à l'utiliser, à le modifier ou à y contribuer selon vos besoins !


