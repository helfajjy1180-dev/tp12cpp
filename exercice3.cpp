
#include <iostream>
#include <stdexcept>

class Tableau {
private:
    int* data;
    int taille;

public:
    Tableau(int t) {
        if (t <= 0) {
            throw std::invalid_argument("Taille invalide");
        }

        taille = t;
        data = new int[taille];

        for (int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }

    int& operator[](int index) {
        if (index < 0 || index >= taille) {
            throw std::out_of_range("Indice invalide");
        }

        return data[index];
    }

    ~Tableau() {
        delete[] data;
    }
};

int main() {
    try {
        Tableau t(5);

        t[0] = 10;
        t[1] = 20;
        t[2] = 30;
        t[3] = 40;
        t[4] = 50;

        for (int i = 0; i < 5; i++) {
            std::cout << t[i] << " ";
        }

        std::cout << std::endl;

        std::cout << "Element : " << t[2] << std::endl;

        std::cout << t[5] << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}
