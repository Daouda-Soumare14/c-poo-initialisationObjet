#include <iostream>
#include <string>
using namespace std;

//Prototype de la méthode (dans le .hpp) :
void maMethode(int parametre) const;
 
 
//Déclaration de la méthode (dans le .cpp) :
void MaClasse::maMethode(int parametre) const
{
 
}

bool Personnage::estVivant() const
{
    return m_vie > 0;
}

/*
    une méthode qui se contente d'afficher à 
    l'écran des informations sur l'objet est 
    une méthode constante : elle ne fait que 
    lire les attributs ;

en revanche, une méthode qui met à jour le niveau
 de vie d'un personnage ne peut pas être constante.
*/

/*
    On utilisera le mot-clé const sur des méthodes qui
     se contentent de renvoyer des informations sans 
     modifier l'objet. C'est le cas par exemple de la
      méthode estVivant(), qui indique si le personnage 
      est toujours vivant ou non. Elle ne modifie pas l'objet,
       elle vérifie le niveau de vie.


*/