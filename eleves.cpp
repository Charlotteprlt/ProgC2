#include "eleves.h"

void Eleve::set_note(int u){
    assert((0<=u) && (u<=20));
    note = u;
}

void Eleve::set_nom(std::string nom){
    nom_eleve = nom;
}


//Constructeur qui construit des eleves aleatoires
Eleve::Eleve(){
    int note_alea;
    //on genere aleatoirement le nombre de lettres du prenom
    int nbr_lettres;
    //on genere un nombre aleatoire entre 0 et 20
    note_alea = rand()%21;
    //on genere un nombre aleatoire entre 1 et 10 qui correspond au nombre de
    nbr_lettres = rand()%10 +1;
    std::string nom;
    nom.push_back('A'+rand()%26);
    for(int k=0; k<nbr_lettres; k++){
        nom.push_back('a'+rand()%26);
    }
    note = note_alea;
    nom_eleve = nom;
}

// définition du destructeur
Eleve::~Eleve(){
}

//Fonction servant a afficher les eleves
void Eleve::print(){
    std::cout<<nom_eleve<<" "<<note<<std::endl;
}
