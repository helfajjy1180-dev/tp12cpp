
#include <iostream>
#include <string>

class Produit {
private:
    std::string nom;
    double prix;
    int quantite;

public:
    Produit(std::string n, double p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }

    friend std::ostream& operator<<(std::ostream& os, const Produit& p);
};

std::ostream& operator<<(std::ostream& os, const Produit& p) {
    os << "Nom : " << p.nom << std::endl;
    os << "Prix : " << p.prix << " DH" << std::endl;
    os << "Quantite : " << p.quantite;

    return os;
}

int main() {
    Produit p1("Ordinateur", 7500.0, 3);
    Produit p2("Clavier", 250.0, 10);

    std::cout << p1 << std::endl;

    std::cout << "------------------" << std::endl;

    std::cout << p2 << std::endl;

    return 0;
}
