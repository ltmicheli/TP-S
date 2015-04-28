#include <iostream>

using namespace std;

int main()
{
    unsigned int Tematica,
                 Puntaje = 0;
             char Respuesta;
    cout << "\nIngrese la tematica: 1_Deporte, 2_Ciencia, 3_Geofrafia\n";
    cin >> Tematica;
    while(Tematica == 1 || Tematica == 2 || Tematica == 3)
    {

        switch(Tematica)
        {
             case 1:
                 cout << "\nEligio deporte, Su pregunta es: \n";
                 cout << "¿Como se le llama al juez en un partido de tenis?\n";
                 cout << "A_Juez\nB_Arbitro\nC_Umpire\n";
                 cin >> Respuesta;
                 cout << "\n";
                 if(Respuesta == 'c' || Respuesta == 'C')
                 {
                     Puntaje++;
                     cout << "\nRESPUESTA CORRECTA\n";
                 }else{cout << "\nRESPUESTA INCORRECTA\n";}
                 break;
             case 2:
                 cout << "\nEligio ciencia, Su pregunta es: \n";
                 cout << "¿Cual de estos animales no es un mamifero?\n";
                 cout << "A_Lagartija\nB_Vaca\nC_Murcielago\n";
                 cin >> Respuesta;
                 cout << "\n";
                 if(Respuesta == 'a' || Respuesta == 'A')
                 {
                     Puntaje++;
                     cout << "\nRESPUESTA CORRECTA\n";
                 }else{cout << "\nRESPUESTA INCORRECTA\n";}
                 break;
              case 3:
                 cout << "\nEligio geografia, Su pregunta es: \n";
                 cout << "¿Como se les dice a las personas que nacieron en la provincia de San Luis?\n";
                 cout << "A_Puntanos\nB_San luisiños\nC_San luisanos\n";
                 cin >> Respuesta;
                 cout << "\n";
                 if(Respuesta == 'a' || Respuesta == 'A')
                 {
                     Puntaje++;
                     cout << "\nRESPUESTA CORRECTA\n";
                 }else{cout << "\nRESPUESTA INCORRECTA\n";}
                 break;
        }

        cout << "\nIngrese la tematica: 1_Deporte, 2_Ciencia, 3_Geofrafia\n";
        cin >> Tematica;
    }
    cout << "\nSu punaje fue: ";
    cout << Puntaje;
}
