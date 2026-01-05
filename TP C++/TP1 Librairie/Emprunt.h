#ifndef admin_Emprunt_h
#define admin_Emprunt_h
#include <string>

class Emprunt {
    public:
        Emprunt(
            std::string IDlecteur,
            std::string ISBN,
            std::string dateEmprunt,
            
        );

        
        std::string getIDlecteur() const;
        std::string getISBN() const;
        std::string getDateEmprunt() const;
        

    private:
         std::string IDlecteur;
            std::string ISBN;
            std::string dateEmprunt;
};