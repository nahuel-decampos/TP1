/* TP 1: Tipos de datos
   Nahuel de Campos
   11/04/15
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    cout << "\nEJEMPLOS DE USO DE VARIABLES, OPERACIONES Y TIPOS DE DATOS\n";
    cout << "------------------------------------------------------------\n";

    cout << "\n>> Ejemplo de uso de bool para decir si un numero aleatorio (de un digito) es primo\n";
    cout << "El programa toma un numero aleatorio entre 0 y 9\n";
    cout << "Luego realiza una *comparacion* con numeros primos dados en ese rango\n";
    cout << "Da una respuesta segun el valor *booleano* de la comparacion\n";
    int x;
    srand(time(NULL));
    x = rand()%10;

    bool primo(false);
     if (x == 2)
        primo = true;
    else if (x == 3)
        primo = true;
    else if (x == 5)
        primo = true;
    else if (x == 7)
        primo = true;

    if (primo)
        cout << "El valor " << x << " es primo \n\n";
    else
        cout << "El valor " << x << " no es primo \n\n";

    cout << "\n>> Ejemplo de concatenacion de caracteres (char)\n";
    cout << "Se toman dos palabras char para formar una nueva que tambien es char\n";
    char str1[16];
    char str2[16];
    strcpy(str1, "algo");
    strcpy(str2, "ritmos");
    cout << "Primer palabra: " << str1 << "\n";
    cout << "Segunda palabra: " << str2 << "\n";
    strcat(str1, str2);
    cout << "Se forma la nueva palabra: " << str1 << "\n\n";

    cout << "\n>> Ejemplo de manipulacion de cadenas strings\n";
    cout << "Usando los chars anteriores para formar una frase\n";
    cout << "Luego se calcula la longitud de dicha frase\n";
    string str3(str2, 0, 5);
    string str4 = str1;
    string str5;
    str5 = "El " + str3 + " de " + str4;
    cout << "Se formo la frase: " << str5 <<"\n";
    cout << "La longitud de la frase (contando espacios) es: " << str5.size() << "\n\n";

    cout << "\n>> Ejemplo de una operacion con double e int\n";
    cout << "Se busca la parte decimal de un valor elegido (pi) sin usar la funcion fmod\n";
    cout << "Para ello se le resto a este valor el mismo pero forzado como entero\n";
    cout << "Esta maniobra poco recomendada, para el ejemplo sirve y nos da la parte decimal de pi\n";
    double y;
    int z;
    const double PI = atan(1.0)*4.0;
    z = PI;
    y = PI - z;
    cout << y;
}
