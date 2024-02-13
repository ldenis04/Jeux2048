#include "joueur.h"

Joueur::Joueur() : pseudo(""), score(0), duree(0) {
}

Joueur::Joueur(const string _pseudo, int _score, int _duree) :
pseudo(_pseudo), score(_score), duree(_duree) {
}

void Joueur::Actualiser(const int _nouveauScore, const int _duree) {

    if (_nouveauScore > score) {
        score = _nouveauScore;
    }
    duree += _duree;
}

void Joueur::ObtenirInfo(string &_pseudo, int &_score, int &_duree){

    _pseudo = pseudo;
    _score = score;
    _duree = duree;
}

bool Joueur::operator<(const Joueur &_autre)const {

    return score < _autre.score;
}

bool Joueur::operator!=(const string _pseudo) const {

    return pseudo != _pseudo;
}
