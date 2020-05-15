/*----------------------------------
 *
 * Materia: Programacion Orientada a Objetos (TC1030)
 * Laboratorio: POO y C++
 * Fecha: 15-Mayo-2020
 * Autor: A01705763 Julio Cesar Perez Rodriguez
 *
 *----------------------------------*/
#include <iostream>
#include <string>
#include "triangulosI.h"

using namespace std;

int main() {
  unsigned int resp;
  TriangulosI a;
  TriangulosI b(1,3,2);
  TriangulosI c(2,6,4);
  TriangulosI d(3,9,5);

  //Consultamos los objetos
  a.consulta();
  b.consulta();
  c.consulta();
  d.consulta();

  //Modificamos un objeto
  a.setLdif(5);
  a.setLiguales(7);

  //Consultamos el objeto modificado
  a.consulta();

  //Calculamos el area y perimetro de los objetos
  cout<<"\n Objeto 0 \n";
  a.calcularPerimetro();
  a.calcularArea();
  cout<<"\n Objeto 1 \n";
  b.calcularPerimetro();
  b.calcularArea();
  cout<<"\n Objeto 2 \n";
  c.calcularPerimetro();
  c.calcularArea();
  cout<<"\n Objeto 3 \n";
  d.calcularPerimetro();
  d.calcularArea();
}