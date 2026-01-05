#include <iostream>
#ifndef admin_Prod_h
#define admin_Prod_h
#include <string>
class Produit {
    public:
        Produit(const std::string& nom, double prix)
            : titre_(titre), prix_(prix) {}

        std::string getTitre() const {
            return titre_;
        }

        double getPrix() const {
            return prix_;
        }
        int getQty() const {
            return qty_;
        } 
        void setQty(int qty) {
            qty_ = qty;
        }
         std::string getDescript() const {
            return Descript_;
         }
         private:
         std::string titre_;
         double prix_;
         int qty_;
            std::string Descript_;   

}

