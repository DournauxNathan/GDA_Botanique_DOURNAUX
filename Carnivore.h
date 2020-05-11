#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <string>
#include "Plante.h"
#include "Carnivore.h"

class Carnivore : public Plante {

  public:
  
    void pousser();
    void tailler();
    void arroser();
    void manger();
    
    void inspecter();
    
    Carnivore(std::string name);
    
};

#endif