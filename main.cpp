#include <iostream>
#include "triangulos.cpp"

using namespace std;

int main() {
  tTriangulos triangulo;
  triangulo.lado1 = 1.0;
  triangulo.lado2 = 2.0;

  triangulo.hipotenusa();
}