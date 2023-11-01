#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
    public:

    Personnage(); // le constructeur n'a pas de type de retour pas meme void. on l'appel le constructeur par deffaut vu q'il n'a pas de parametre
    Personnage(std::string nomArme, int degatsArme); // le surcharge du deuxieme constructeur, le deuxieme constructeur a des parametre

    Personnage(Personnage const& autre);
    // Si toutefois, vous désirez changer le comportement du constructeur de copie, 
    // il faut simplement :

    // le déclarer dans votre classe :



    private:

    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
    int m_degatsArme;
};

#endif