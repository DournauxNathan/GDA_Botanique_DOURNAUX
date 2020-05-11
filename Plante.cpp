#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include "Plante.h"

    /*
    int _taille;
    int _hydratation; 
    int _giveEngrais; 
    std::string _nom;
    */
    void Plante::pousser() {
        if(_giveEngrais == 0) 
        {
            _maturite++;
            _giveEngrais = 1;
        }
    }
    
    void Plante::tailler() {
        _taille-=10;
    }
    
    void Plante::arroser() {
        _hydratation+=10;
    }
    
    void Plante::dormir() {
        _hydratation-=10;
        _taille+=10;
    }
    
    void Plante::etat() {
        if(_maturite == 10) { std::cout << "La plante à atteint la maturité" << std::endl; }
        if(_taille >= 100) { std::cout << "La plante est blessé, elle ne peut plus pouser" << std::endl; }
        if(_hydratation >= 100) { std::cout << "La plante est blessé, elle ne peut plus pouser" << std::endl; }
        
    }
    
    void Plante::inspecter() {
        std::cout << "- " << _nom << " -\n" <<
        "Maturité: " << _maturite << "/10\n" <<
        "Niveau de santé: " << _taille << "      (0 = verdoyante, 100 = blessé) \n" <<
        "Niveau d'hydratation: " << _hydratation << " (0 = sèche, 100 = noyer)\n" << std::endl;
    }
    
    Plante::Plante(std::string name) : _nom(name), _taille(50), _hydratation(50), _giveEngrais(0){}

#endif