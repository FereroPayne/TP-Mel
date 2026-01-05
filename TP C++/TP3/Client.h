#include <iostream>
#ifndef admin_Client_h
#define admin_Client_h
#include <string>

class Client {
    public:
        Client(const std::string& nom, const std::string& prenom)
            : nom_(name), prenom_(email) {}

        std::string getNom() const {
            return nom_;
        }

        std::string getPrenom() const {
            return prenom_;
        }
        std::string getPanier() const {
            return panier_;
        }

        private:
        std::string nom_;
      std::string prenom_;
        std::string panier_;
};