#ifndef admin_Biblio_h
#define admin_Biblio_h
#include <string>

class Bibliothèque {
    public:
        Bibliothèque(
            std::string nom,
            std::string adresse,
            std::string IDbiblio
        );

        std::string getNom() const;
        std::string getAdresse() const;
        std::string getIDbiblio() const;

        void AjouterLivre();
        void SupprimerLivre();
        void RechercherLivre();
        void AjouterAuteur();
        void AjouterLecteur();
    Lecteur emprunter(){
        
        

    }
           

    private:
        std::string nom;
        std::string adresse;
        std::string IDbiblio;

};

