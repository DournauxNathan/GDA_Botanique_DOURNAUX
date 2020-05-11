#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <iostream>
#include <string>
#include "Botaniste.h"
#include "Plante.h"

    /*
    int _nJour;
    int _argent;
    in _stockEngrais;
    */
 
    void Botaniste::dormir(Plante * cible){
        _nJour++;
        std::cout << "Jour " << _nJour <<"\n_________________\n" << std::endl;
        cible->dormir();
    }
    
    void Botaniste::acheterPlante(){
        _argent+=10;
        //Ajout d'une plante push.back()??
    }
    
    void Botaniste::vendrePlante(){
        //Supprimer la plante cible
        _argent+=10;
    }
    
    void Botaniste::acheterEngrais(int sacEngrais){
        _stockEngrais += sacEngrais;
        _argent-= 5*sacEngrais; //1 Sac vaut 5 'argent'
    }
    
    void Botaniste::afficher(){
        std::cout << 
        "Argent: " << _argent << "\n" <<
        "Engrais: " << _stockEngrais << "\n" << std::endl;
    }
    
    
    Botaniste::Botaniste() : _argent(50) {}
    
#endif