/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
#include "gestionJoueurs.h"

int RechercherJoueur(Joueur * _tab, const int _nb, const string &_pseudo)
{
    int i = 0;
    while (i < _nb && _tab[i] != _pseudo)
    {
        i++;

    }
    if (i == _nb)
        i = -1;
    return i;
}