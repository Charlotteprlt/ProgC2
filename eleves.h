#include <iostream>
#include "assert.h"
#include <ctime>
#include <vector>
#include <string>
#include "string.h"
#include <stdlib.h>
#include "time.h"
#include <algorithm>
#include <cstdlib>
#pragma once

//definition de la classe Eleve
class Eleve{
private :
    std::string nom_eleve;
    int note;
public:
    //un constructeur generant des eleves aleatoires
    Eleve();
    //un destructeur
    ~Eleve();
    //methode permettant d'acceder a la note
    int get_note(){return note;}
    //methode permettant d'acceder au nom de l'eleve
    std::string get_nom(){return nom_eleve;}
    //methode permettant de rentrer une note
    void set_note(int u);
    //methode permettant de rentrer un nom
    void set_nom(std::string nom);
    //methode permettant d'afficher les eleves
    void print();
    };



//foncteur de comparaison des notes des élèves
class CompareNote{
    int* ptr;
public:
    CompareNote(int* compteur){
        ptr=compteur;
    }
    bool operator()(Eleve E1, Eleve E2) const{
    ++*ptr;
    return E1.get_note()<E2.get_note();
    }
};

//foncteur de comparaison des noms des élèves
class CompareNom{
    int* ptr;
public:
    CompareNom(int* compteur){
        ptr=compteur;
    }
    bool operator()(Eleve E1, Eleve E2) const{
    ++*ptr;
    return E1.get_nom()[0]<E2.get_nom()[0];
    }
};



