#include "ColasDePrioridad.cpp"

int main() {
  monticulo mon(10);

  mon.monticulo_lleno();
  mon.insertar(60);
  mon.insertar(80);
  mon.insertar(20);
  mon.insertar(90);
  mon.insertar(50);
  mon.insertar(40);
  mon.insertar(30);
  mon.insertar(70);
  mon.insertar(55);
  mon.insertar(45);
  //if (mon.insertar(47))
    //cout << "Se agrego el 47" << endl;
  //else
    //cout << "No se pudo agregar el número 47" << endl;
  mon.imprimirArreglo();
  mon.atender();
  mon.imprimirArreglo();
  //mon.atender();
  // cout << "Atender: " << mon.atender() << endl;
  // mon.imprimirArreglo();
  //mon.insertar(80);
  // mon.insertar(90);
  //mon.imprimirArreglo();
  return 0;
}
