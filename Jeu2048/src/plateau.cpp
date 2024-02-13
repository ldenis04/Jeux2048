/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Plateau.cpp
 * Author: ldenis
 * 
 * Created on 31 janvier 2024, 11:03
 */

#include "plateau.h"

Plateau::Plateau() {
}

void Plateau::Afficher() {
    int laGrille[TAILLE][TAILLE];
    system("clear");
    leJeu.ObtenirGrille(laGrille);
    cout << "| Score : " << score << " | Nombre de coups : " << nbCoups << " |" << endl;
    cout << endl;
    for (int ligne = 0; ligne < 4; ligne++) {
        cout << " +";
        for (int indice = 0; indice < 4; indice++)
            cout << setw(7) << setfill('-') << '+';
        // affichage d'une ligne de la grille
    }
    cout << setw(7) << setfill('-') << '+'; // affichage de la dernière ligne du tableau
    cout << "F pour sortir du jeu" << endl; // affichage du texte sous le tableau
    cout << "Votre déplacement : H(^), B(v), G(<-), D(->) :" << endl;
}

bool JouerCoup(const char _direction) {
}
