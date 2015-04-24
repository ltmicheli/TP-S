/* TP2 NUMERO PAR */

#include <iostream>
using namespace std;

main()
{
  int Numero;
  cout << "Ingrese un numero: ";
  cin >> Numero;
  cout << Numero;
  if(Numero % 2 == 0 && Numero != 0)
        cout << "\nEl numero es par";
}
Ejecutable

Ingrese un numero: 4
El numero es par
