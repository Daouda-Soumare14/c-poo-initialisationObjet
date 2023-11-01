#include <iostream>
#include <string>
#include "Personnage.hpp"
using namespace std;

int main()
{
    // utilisation de l'objet
    Personnage david, goliath("Epee aiguisee", 20); // creation de deux objets de type personnage: david et goliath
    // vu qu'on a initialiser goliath donc il utilise le constructeur surcharger
    // et david qui est non initialiser prend le constructeur sans parametre(par deffaut)


    // Par exemple si l'on souhaite que david soit une copie conforme de goliath,
    //  il nous suffit d'écrire :
    Personnage goliath("Epee aiguisee", 20);  //On crée goliath en utilisant un constructeur normal

    Personnage david(goliath);                //On crée david en copiant tous les attributs de goliath

    return 0;
}

    

