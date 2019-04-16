#include "eleves.h"
#include <iostream>
#include <vector>


int main(){
    std::vector<Eleve> liste_eleves;
    for (int i=0; i<10; i++){
        Eleve e;
        liste_eleves.push_back(e);
    }
    int *compteur1=new int(0);
    *compteur1 =0;
    CompareNote cmp1(compteur1);
    std::sort(liste_eleves.begin(), liste_eleves.end(), cmp1);
    liste_eleves[0].print();
    std::vector<Eleve>::iterator it;
    for(it=liste_eleves.begin(); it!=liste_eleves.end(); ++it){
         std::cout<< it->get_nom() << it->get_note() << std::endl;
    }
    Eleve A;
    std::cout<< A.get_nom() << std::endl;
    return 0;
}
