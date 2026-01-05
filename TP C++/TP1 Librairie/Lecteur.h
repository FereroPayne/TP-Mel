#ifndef admin_Lecteur_h
#define admin_Lecteur_h
#include <string>

class Lecteur {
    public:
        Lecteur(
            std::string nom,
            std::string prenom,
            std::string IDlist,
            std::string ID
        );

        std::string getNom() const;
        std::string getPrenom() const;
        std::string getIDlist() const;
        std::string getID() const;

    private:
        std::string nom;
        std::string prenom;
        std::string IDlist;
        std::string ID;
};