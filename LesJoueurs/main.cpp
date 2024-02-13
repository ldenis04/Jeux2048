#include "joueur.h"
#include "menu.h"
#include "gestionJoueurs.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

#define NB_MAX_JOUEURS 20

enum choix {
    AJOUTER = 1,
    VISUALISER,
    CHARGER,
    SAUVEGARDER,
    QUITTER
};

int main(int argc, char** argv) {
    Menu leMenu("Menu.txt");
    int choix;
    Joueur tabJoueurs[NB_MAX_JOUEURS];
    int nbJoueurs = 0;
    string pseudo;
    int score;
    int duree;

    do {
        choix = leMenu.AfficherEtAttendreChoix();
        switch (choix) {
            case AJOUTER:
            {
                int pos;
                cout << "Pseudo score durée :";
                cin >> pseudo >> score >> duree;
                tabJoueurs[nbJoueurs++] = Joueur(pseudo, score, duree);
                Menu::EffacerEcran();
                break;
            }
            case VISUALISER:
                void visualisationDesJoueurs();
            {
                cout << '+' << setfill('-') << setw(16) << '+' << setw(12) << '+' << setw(12) << '+' << endl;
                for (int i = 0; i < nbJoueurs; i++) {
                    tabJoueurs[i].ObtenirInfo(pseudo, score, duree);
                    cout << '|' << setfill(' ') << setw(15) << left << pseudo << '|' << setw(11) << score << '|' << setw(11) << duree << '|' << endl;
                }
                cout << '+' << setfill('-') << right << setw(16) << '+' << setw(12) << '+' << setw(12) << '+' << endl;

                break;
            }
            case CHARGER:
                break;
            case SAUVEGARDER:
                break;
        }
    } while (choix != QUITTER);
    return 0;
}

