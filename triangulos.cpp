#include <iostream>
#include <math.h>
using namespace std;

struct tTriangulos{
  float lado1;
  float lado2;
  float lado3;

  float hipotenusa(){
    float hipo = 0;
    if((lado1*lado1) >= (lado2*lado2 + lado3*lado3)){
       hipo = sqrt((lado3*lado3)+(lado2*lado2));

       if(round(lado1) == round(hipo)){
         return hipo;
       }

    }else if((lado2*lado2) >= (lado1*lado1 + lado3*lado3)){
      hipo =  sqrt((lado1*lado1)+(lado3*lado3));

      if(round(lado2) == round(hipo)){
         return hipo;
       }

    }else if((lado3*lado3) >= (lado2*lado2 + lado1*lado1)){
      hipo = sqrt((lado1*lado1)+(lado2*lado2));

      if(round(lado3) == round(hipo)){
         return hipo;
       }
    }
    return -1;

  }

  void mostrarHipotenusa(){
    float hipo = hipotenusa();

    if(hipo != -1){
      cout<<"\nA hipotenusa é : " <<hipo;

    }else{
      cout<<"\nEsse nao é um triangulo retangulo!";
    }
    
  }

  void mostrarPerimetro(){
    cout<<"\nO perimetro é : " <<(lado1 + lado2 + lado3);
  }

  void mostrarArea(){

    float hipo = hipotenusa();
    float area = 0;

    if(hipo != -1){

      if(lado1 >= hipo){
      area = ((lado2*lado3)/2);

      }else if(lado2 >= hipo){
        area = ((lado1*lado3)/2);

      }else if(lado3 >= hipo){
        area = ((lado2*lado1)/2);
      }
       cout<<"\nA area do triangulo é : " <<area;
      
    }else{
      cout<<"\nEsse nao é um triangulo retangulo!";
    }
  
  }

};