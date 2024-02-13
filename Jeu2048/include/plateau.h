/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Plateau.h
 * Author: ldenis
 *
 * Created on 31 janvier 2024, 11:03
 */

#ifndef PLATEAU_H
#define PLATEAU_H

class Plateau {
public:
    Plateau();
    void Afficher();
    bool JouerCoup(const char _direction);
private:
    int nbCoups;
    int score;
};

#endif /* PLATEAU_H */

