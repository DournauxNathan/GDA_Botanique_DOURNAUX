#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante {
  protected:
    int _maturite;
    int _taille;
    int _hydratation;
    int _giveEngrais; 
    std::string _nom;
  
  public:
    void virtual pousser();
    void virtual tailler();
    void virtual arroser();
    void virtual dormir();
    void virtual etat();
    
    void inspecter();
    
    Plante(std::string name);
    
};
#endif