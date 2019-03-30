/******************************************************************************
Hoja 6 - Ejercicio 1
*******************************************************************************/
#include <iostream>
//Test
/*
test 1
litrosConsumidos = 4

test 2
litrosConsumidos = 10
*/
using namespace std;

int main()
{
    //Entrada
    int litrosConsumidos;
    const int cuotaMensualFija = 20;
    const float cobroEntre51y200 = 2;
    const float cobroMayor200 = 3.5;

    float gastoAgua;
    //Restricciones
    /*
    llitrosConsumidos> 0
    litrosConsumidos es entero
    */
    
    //Lógica
    cout<<"Ingrese la cantidad de litros consumidos: ";
    cin>>litrosConsumidos;

    if (litrosConsumidos<=50){
        gastoAgua = cuotaMensualFija;
    }else{
       if (litrosConsumidos>=51 && litrosConsumidos <= 200){
           gastoAgua = cuotaMensualFija + litrosConsumidos*cobroEntre51y200;
       } 
       else{
           gastoAgua = cuotaMensualFija + litrosConsumidos*cobroMayor200;
       }
    }

    //Salida
    cout<<"Él monto a pagar de agua es: "<<gastoAgua<<endl;

    return 0;
}