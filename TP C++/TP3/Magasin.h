#include <iostream>
#ifndef admin_Prod_h
#define admin_Prod_h
#include <string>

class Magasin {
    public:
        Magasin(const std::string& nomMagasin, const std::string& adresse)
            : nomMagasin_(nomMagasin), adresse_(adresse) {}

        std::string getNomMagasin() const {
            return nomMagasin_;
        }

        std::string getAdresse() const {
            return adresse_;
        }

 Magasin AjouterProduit(const Produit& produit) {
    // Implémentation de l'ajout d'un produit au magasin
      return *this;
       

 }      
 Magasin TousProduit(const Produit& produit) {
// Implémentation pour afficher tous les produits du magasin
      return *this;
    
    }

    Magasin afficheProduit(const Produit& produit) {
    // Implémentation pour afficher un produit spécifique du magasin
      return *this;

    } Magasin setQtyProduit(const Produit& produit) {
    // Implémentation pour supprimer un produit du magasin
      return *this;

    }


    private:
        std::string nomMagasin_;
        std::string adresse_;
};