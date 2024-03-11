//Ejercicio2 

#include <iostream>
#include <string>

using namespace std;

// cambie de struct a class para que los atributos sean privados y no puedan ser modificados
// utilice un constructor para inicializar los valores en 0

class Objeto {
private:
    string angulo;
    int IzqX;
    int IzqY;
    int DerX;
    int DerY;

public:
    // el constructor inicializa los valores de los atributos "aun no tienen un valor"
    Objeto(const string& a, int x1, int y1, int x2, int y2)
        : angulo(a), IzqX(x1), IzqY(y1), DerX(x2), DerY(y2) {}

    // Constructor que inicializa todo a cero
  
    Objeto() : angulo("Angel :D"), IzqX(0), IzqY(0), DerX(0), DerY(0) {}

    int Area() const {
        int largo = DerX - IzqX;
        int ancho = IzqY - DerY;
        return largo * ancho;
    }
    // imprimir llegaria a ser el comportamiento de la clase
    void imprimir() const {
        cout << "Objeto: " << angulo << endl;
        cout << "Coordenadas: Izquierda X=" << IzqX << endl << "Izquierda Y=" << IzqY << endl
            << "Derecha X=" << DerX << endl << "Derecha Y=" << DerY << endl;
        cout << "Area: " << Area() << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {

    Objeto objeto1("Objeto1", 0, 3, 4, 0);
    Objeto objeto2("Objeto2", 2, 5, 6, 1);

    objeto1.imprimir();
    objeto2.imprimir();

    return 0;
}