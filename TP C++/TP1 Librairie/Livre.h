#ifndef admin_Livre_h
#define admin_Livre_h
#include <string>

class Livre {
    {
    public:
        Livre (std::string titre, 
            std::string auteur, 
            int DatePublication,
            std::string ISBN,
        int IDprecedent,
    std::string langue,
    std::string genre);

        std::string getTitre() const;
        std::string getAuteur() const;
        int getDatePublication() const;
        std::string getISBN() const;
        int getIDprecedent() const;
        std::string getGenre() const;
        std::string getLangue() const;

        private:
        std::string titre, 
            std::string auteur, 
            int DatePublication,
            std::string ISBN,
        int IDprecedent,
    std::string langue,
    std::string genre

}

class auteur {
    public:
     auteur (
        std::string nom,
        std::string prenom,
        std::string dateNaissance,
        std::string IDnum
    );
    std::string getNom() const;
    std::string getPrenom() const;
    std::string getDateNaissance() const;
    std::string getIDnum() const;

    private:
    std::string nom;
        std::string prenom;
        std::string dateNaissance;
        std::string IDnum;
}

}


#endif#endif