#ifndef FONCTIONS_FICHERS_H
#define FONCTIONS_FICHERS_H

char** allouer_tab_2D(int n, int m);

void desallouer_tab_2D(char** tab, int n);

void afficher_tab_2D(char** tab, int n, int m);

void taille_fichier(const char* nomFichier, int* nbLig, int* nbCol);

char** lire_fichier(const char* nomFichier);

char** modifier_caractere(char** tab, int n, int m, char ancien, char nouveau);

void ecrire_fichier(const char* nomFichier, char** tab, int n, int m);

#endif
