#include <iostream>
#include <math.h>
using namespace std;

struct tTriangulos{
  float lado1;
  float lado2;
  float lado3;

  void hipotenusa(){
    lado3 = sqrt((lado1*lado1)+(lado2*lado2));
  }

  void mostrarHipotenusa(){
    cout<<"A hipotenusa é : " <<lado3;
  }

  void mostrarPerimetro(){
    cout<<"O perimetro é : " <<(lado1 + lado2 + lado3);
  }

  void mostrarArea(){
    
  }

};



