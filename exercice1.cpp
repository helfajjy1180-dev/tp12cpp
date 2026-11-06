#include <iostream>
class Vecteur2d{
   private:
    double x,y;
   public:
    Vecteur2d(double x, double y){
        this->x = x;
        this->y = y;
    }
    Vecteur2d operator+(const Vecteur2d& v){
        return Vecteur2d(this->x + v.x, this->y + v.y);
    }
    void afficher(){
        std::cout << "(" << this->x << "," << this->y << ")" << std::endl;
    }
};

int main() {
    Vecteur2d v1(2, 3);
    Vecteur2d v2(4, 5);

    Vecteur2d resultat = v1 + v2;

    std::cout << "Vecteur 1 : ";
    v1.afficher();

    std::cout << "Vecteur 2 : ";
    v2.afficher();

    std::cout << "Resultat : ";
    resultat.afficher();

    return 0;
}