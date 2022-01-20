// aceleracion y tension.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<math.h>
#include<stdlib.h>
#define PI 3.14159265
using namespace std;
   int main()
   {
       
        float masa1, masa2,w1,w2,seno,coseno,m,l,n,tension,aceleracion,reversa1,reversa2,o,h;
        float coeficiente, g = 9.81;
        cout << "nota: solo se puede ingresar en kg, pero solo ponga el valor" << endl;
        cout << "ingrese la masa 1--->";
        cin >> masa1;
        cout << "ingrese la masa 2--->";
        cin >> masa2;
        cout << "ingrese se angulo--->";
        cin >> seno;
        cout << "ingrese el coeficiente--->";
        cin >> coeficiente;

        //las siguientes variables conforman la ecuacion final de la aceleracion
        //(m2*g-(m1*g*sen(theta))-(friccion*m1*g*cos(theta))/m1+m2)

        w1 = masa1 * g;
        w2 = masa2 * g ;
        m = masa1 + masa2;
        n = coeficiente * masa1 * g * cos(seno);
        l = masa1 * g * sin(seno);
        h = masa2 * g;
        aceleracion =( h - (l)-(n)) /m ;

        //las siguientes variables conforman la ecucion final de la tension
        //(tension=(m2(g-aceleracion)))
        reversa1 = masa2 * g;
        reversa2 = masa2 * aceleracion;
        tension = reversa1 - reversa2;
        cout <<endl<<"la aceleracion es:  "<< aceleracion<<" m/s^2"<<endl<<"la tension es:  "<<tension<<" N"<<endl;
        cout << "el peso 1 es: " << w1 << " N" << endl << "el peso 2 es:  " << w2 << " N" << endl;
        system("pause");
        return 0;
   }

