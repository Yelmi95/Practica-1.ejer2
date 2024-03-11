#include <iostream>
#include <string>
using namespace std;

class Rectangulo
{
private:
    int coordx1;
    int coordy1;
    double base;
    double altura;
    double area;
public:

    Rectangulo(int x1, int y1, int x2, int 2);
        base = Math.abs(x2 - y1);
        altura = Math.abs(y2 - x1);
        area = base * altura;

    void Main()
    {
        // Coordenadas del Rectángulo 1
        double x1Rect1 = 2, y1Rect1 = 4;
        double x2Rect1 = 6, y2Rect1 = 1;

        // Coordenadas del Rectángulo 2
        double x1Rect2 = 7, y1Rect2 = 5;
        double x2Rect2 = 10, y2Rect2 = 2;

        // Calcular Área del Rectángulo 1
        double longitudRect1 = Math.Abs(x2Rect1 - x1Rect1);
        double anchoRect1 = Math.Abs(y2Rect1 - y1Rect1);
        double areaRect1 = longitudRect1 * anchoRect1;

        // Calcular Área del Rectángulo 2
        double longitudRect2 = Math.Abs(x2Rect2 - x1Rect2);
        double anchoRect2 = Math.Abs(y2Rect2 - y1Rect2);
        double areaRect2 = longitudRect2 * anchoRect2;

        // Mostrar resultados
        Console.WriteLine("Área del Rectángulo 1: " + areaRect1);
        Console.WriteLine("Área del Rectángulo 2: " + areaRect2);
    }
};