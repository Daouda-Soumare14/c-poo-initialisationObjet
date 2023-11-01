#include "Personnage.hpp"
using namespace std;

Personnage::Personnage()
{
    // c'est le constructeur qui permet d'initialiser les attrubuts
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "Epee rouillee";
    m_degatsArme = 10;

    // ce code produit le meme effet
    // Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Epee rouillee"), m_degatsArme(10)
    // {
    // Rien à mettre dans le corps du constructeur, tout a déjà été fait !
    // }
}

Personnage::Personnage(string nomArme, int degatsArme):m_vie(100),m_mana(100),m_nomArme(nomArme),m_degatsArme(degatsArme)
{
    // Rien a mettre dans le corps du constructeur, tout a deja ete fait !
}
