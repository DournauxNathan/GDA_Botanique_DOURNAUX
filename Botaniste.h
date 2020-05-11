#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include "Plante.h"

class Botaniste {
 protected:
    int _nJour = 1;
    int _argent;
    int _stockEngrais;
    /*std::vector<Plante*> _hand;*/
    
  public:
    void dormir(Plante * cible);
    void acheterPlante();
    void vendrePlante();
    void acheterEngrais(int sacEngrais);
    void afficher();
  
    Botaniste();
   
    
};
#endif