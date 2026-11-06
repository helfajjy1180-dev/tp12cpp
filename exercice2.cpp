
#include <iostream>
#include <string>

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }

    bool operator==(const Date& d) const {
        return (jour == d.jour &&
                mois == d.mois &&
                annee == d.annee);
    }

    bool operator!=(const Date& d) const {
        return !(*this == d);
    }

    void afficher() const {
        std::cout << jour << "/" << mois << "/" << annee << std::endl;
    }
};

int main() {
    Date d1(6, 11, 2026);
    Date d2(6, 11, 2026);
    Date d3(7, 11, 2026);

    if (d1 == d2) {
        std::cout << "Les deux dates sont égales." << std::endl;
    } else {
        std::cout << "Les deux dates sont différentes." << std::endl;
    }   
}