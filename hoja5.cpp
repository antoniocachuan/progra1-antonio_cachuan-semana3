
/******************************************************************************
Hoja 5 - Ejercicio 1
*******************************************************************************/
#include <iostream>
//Test
/*
test 1
ladoA=2
ladoB=3
ladoC=4

test 2
ladoA=4
ladoB=4
ladoC=4
*/
using namespace std;

int main()
{
    //Entrada
    int ladoA, ladoB, ladoC;
    bool trianguloEquilatero, trianguloIsosceles, trianguloEscaleno;
    //Restricciones
    /*
    ladoA, ladoB, ladoC > 0
    ladoA, ladoB, ladoC son enteros
    */
    
    //Lógica
    cout<<"Ingrese los 3 lados: ";
    cin>>ladoA >>ladoB >> ladoC;

    if (ladoA==ladoB && ladoB == ladoC){
        trianguloEquilatero = 1;
        trianguloIsosceles = 0;
        trianguloEscaleno = 0;
    }else{
       if (ladoA==ladoB && ladoB != ladoC){
            trianguloEquilatero = 0;
            trianguloIsosceles = 1;
            trianguloEscaleno = 0;
       } 
       else{
            trianguloEquilatero = 0;
            trianguloIsosceles = 0;
            trianguloEscaleno = 1;
       }
    }

    //Salida
    cout<<"Equilátero: "<<trianguloEquilatero<<endl;
    cout<<"Isósceles: "<<trianguloIsosceles<<endl;
    cout<<"Escaleno: "<<trianguloEscaleno<<endl;

    return 0;
}