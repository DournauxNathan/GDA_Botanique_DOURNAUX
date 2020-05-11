#ifndef CARNIVORE_CPP

#include <iostream>
#include "Carnivore.h"
#include "Plante.h"

    
   //int _taille; int _hydratation;  int _giveEngrais;   std::string _nom;
   
    void Carnivore::pousser() {
        
    }
    
    void Carnivore::tailler() {
    }
    
    void Carnivore::arroser() {
    }
    
    void Carnivore::manger() {
        if(_giveEngrais == 0) 
        {
            std::cout << "La plante carnivore est nourri" << std::endl;
            _maturite+=2;
            _giveEngrais = 1;
        }
    }
    
    void Carnivore::inspecter() {
        std::cout << "- " << _nom << " -\n" <<
        "Maturité: " << _maturite << "/30\n" <<
        "Niveau de santé: " << _taille << "      (0 = encombrant, 100 = blessé) \n" <<
        "Niveau d'hydratation: " << _hydratation << " (0 = sèche, 100 = noyer)" << std::endl;
        
        if(_giveEngrais == 1){
            std::cout << "État: digère son repas\n" << std::endl;
        }
        else
        {
            std::cout << "État: attend son repas\n" << std::endl;
        }
        
    }
    
    Carnivore::Carnivore(std::string name) : Plante(name) {}

#endif