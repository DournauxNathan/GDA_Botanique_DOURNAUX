#include <stdio.h>
#include "Plante.h"
#include "Botaniste.h"
#include "Carnivore.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Plante * plant = new Plante("Bambou");
    Carnivore * dionaea = new Carnivore("Dionaea");
    Botaniste * player = new Botaniste();
    int choixJoueur;
    int game = 1;
    
    cout << "Jour 1\n_________________\n" << std::endl;
    
    while(game ==1)
    {
        cout << "Que choissisez-vous ?\n" << std::endl;
        cout << "Inspecter la plante[1]    Gérer ses ressources[2]    Dormir[3]" << std::endl;
        cout << "Donner de l'engrais[4]    Tailler la plante[5]    Arroser la plante[6] " << std::endl;
        cout << "Acheter une plante[7]     Vendre une plante[8]    Acheter de l'engrais[9]\n" << std::endl;
        cout << "Inspecter la plante carnivore[0]\n" << std::endl;
        
        cin >> choixJoueur; cout << "\n" << std::endl;
        
        switch(choixJoueur)
        {
            case 1:
                plant->inspecter();
            break;
            
            case 4:
                plant->pousser();
            break;
            
            case 5:
                plant->tailler();
            break;
            
            case 6:
                plant->arroser();
            break;
            
            case 2:
                player->afficher();
            break;
            
            case 7:
                player->acheterPlante();
            break;
            
            case 8:
                player->vendrePlante();
            break;
            
            case 9:
                cout << "Combien de sac voulez vous ?\n (1 sac vaut 5 'argent')" << std::endl;
                cin >> choixJoueur; cout << "\n" << std::endl;
                player->acheterEngrais(choixJoueur);
            break;
            
            case 3:
                player->dormir(plant);
            break;
            
            case 0:
                dionaea->inspecter();
                cout << "Nourrir la plante[1]   Laisser la plante[2] " << std::endl;
                cin >> choixJoueur; cout << "\n" << std::endl;
                switch (choixJoueur)
                {
                    case 1:
                    dionaea->manger();
                    break;
                }
            break;
        }
    }
    return 0;
}
