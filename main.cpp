#include <iostream>
#include "triangulos.cpp"

using namespace std;

int main() {
  int opcao = 0;
  tTriangulos triangulo;

  cout<<"\n\nInforme os lados do triangulo\n";

  cout<<"Lado 1 : ";
  cin>>triangulo.lado1;

  cout<<"Lado 2 : ";
  cin>>triangulo.lado2;

  cout<<"Lado 3 : ";
  cin>>triangulo.lado3;

  do{
    cout<<"\n\nDigite o numero:\n";
    cout<<"1 - para calcular o Perimetro\n";
    cout<<"2 - para calcular a Area\n";
    cout<<"3 - para calcular a Hipotenusa\n";
    cout<<"4 - para calcular um novo Triangulo\n";
    cout<<"0 - para Sair\n";
    cin>>opcao;

    switch(opcao) {

      case 0:
          cout<<"Saindo do programa";
        break;
      case 1:
          triangulo.mostrarPerimetro();
        break;
      case 2:
          triangulo.mostrarArea();
        break;
      case 3:
          triangulo.mostrarHipotenusa();
        break;
      case 4:
        cout<<"\n\nInforme os lados do triangulo\n";

          cout<<"Lado 1 : ";
          cin>>triangulo.lado1;

          cout<<"Lado 2 : ";
          cin>>triangulo.lado2;

          cout<<"Lado 3 : ";
          cin>>triangulo.lado3;

        break;
      default:
        cout<<"Opcao nao programada";
        
    }

  }while(opcao != 0);
  
  
}