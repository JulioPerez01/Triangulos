/*----------------------------------
 *
 * Materia: Programacion Orientada a Objetos (TC1030)
 * Laboratorio: POO y C++
 * Fecha: 15-Mayo-2020
 * Autor: A01705763 Julio Cesar Perez Rodriguez
 *
 *----------------------------------*/

#ifndef TRIANGULOSI_H
#define TRIANGULOSI_H

typedef unsigned int uint;

#include <string>
#include <cmath>
using namespace std;

  class TriangulosI{
    protected: 
      uint id;
      uint liguales;
      uint ldif;

    public:
      TriangulosI();
      TriangulosI(uint id, uint li, uint ld);
      TriangulosI(const TriangulosI &t);
      uint getId() const;
      uint getLiguales() const;
      uint getLdif() const;
      void setLiguales(uint li);
      void setLdif(uint ld);
      void consulta() const;
      void calcularPerimetro();
      void calcularArea();
      
  };
  TriangulosI::TriangulosI(){
    id=0;
    liguales=0;
    ldif=0;
  }

  TriangulosI::TriangulosI(uint i, uint li, uint ld){
    id=i;
    liguales=li;
    ldif=ld;
  }

  TriangulosI::TriangulosI(const TriangulosI &t){
    id=t.id;
    liguales=t.liguales;
    ldif=t.ldif;
  }

  uint TriangulosI::getId() const{
    return id;
  }

  uint TriangulosI::getLdif() const{
    return ldif;
  }

  uint TriangulosI::getLiguales() const{
    return liguales;
  }

  void TriangulosI::setLiguales(uint li){
    liguales=li;
  }
  void TriangulosI::setLdif(uint ld){
    ldif=ld;
  }

  void TriangulosI::consulta()const{
    cout << "Id = " << id << " | Lados Iguales = " << liguales << " | Lado diferente = " << ldif << " \n";
  }

  void TriangulosI::calcularPerimetro(){
    float perimetro=liguales+liguales+ldif;
    cout << "Perimetro: "<<perimetro<< "\n";
  }

  void TriangulosI::calcularArea(){
    float h=sqrt((liguales*liguales)-((ldif*ldif)/4));
    float area=(ldif*h)/2;
    cout << "Area: "<<area << "\n";
  }
#endif