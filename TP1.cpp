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
    bool primo = (x == 2 || x == 3 || x == 5 || x == 7);

    if (primo)
        cout << "El valor " << x << " es primo \n\n";
    else
        cout << "El valor " << x << " no es primo \n\n";

    cout << "\n>> Ejemplo de concatenacion de caracteres (char)\n";
    cout << "Se toman dos palabras char para formar una nueva que tambien es char\n";
    char cha1[5];
    char cha2[7];
    char cha3[12];
    strcpy(cha1, "algo");
    strcpy(cha2, "ritmos");
    strcpy(cha3, cha1);
    cout << "Primer palabra: " << cha1 << "\n";
    cout << "Segunda palabra: " << cha2 << "\n";
    strcat(cha3, cha2);
    cout << "Se forma la nueva palabra: " << cha3 << "\n\n";

    cout << "\n>> Ejemplo de manipulacion de cadenas strings\n";
    cout << "Usando los chars anteriores para formar una frase\n";
    cout << "Luego se calcula la longitud de dicha frase\n";
    string str1 = cha1;
    string str2 = cha3;
    string str3 = "Se " + str1 + " de " + str2;
    cout << "\nSe formo la frase: " << str3 <<"\n";
    cout << "La longitud de la frase (contando espacios) es: " << str3.size() << "\n\n";

    cout << "\n>> Ejemplo de una operacion con double e int\n";
    cout << "Se busca la parte decimal de un valor elegido (pi) sin usar la funcion fmod\n";
    cout << "Para ello se le resto a este valor el mismo pero forzado como entero\n";
    cout << "Esta maniobra poco recomendada, para el ejemplo sirve y nos da la parte decimal de pi\n";
    double y;
    int z;
    const double PI = atan(1.0)*4.0;
    z = PI;
    y = PI - z;
    cout << "\nEl resto es: " << y << "\n";
}
