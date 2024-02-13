/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Jeu2048.h
 * Author: ldenis
 *
 * Created on 31 janvier 2024, 10:27
 */

#ifndef JEU2048_H
#define JEU2048_H

class Jeu2048 {
public:

    enum class EtatsDuJeu {
        JEU_EN_COURS,

        JEU_TERMINE,

        JEU_GAGNE

    };
    Jeu2048();
    PlacerNouvelleTuile();
    bool Calculer(const char _direction);
    void Deplacer(const char _direction);
    int CalculerScore();
    void ObtenirGrille(int _grille[4][4]);
    EtatsDuJeu RechercherFinDePartie();

private:
    int grille[4][4];
};

#endif /* JEU2048_H */

