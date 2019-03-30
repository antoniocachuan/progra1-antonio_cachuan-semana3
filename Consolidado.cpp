/******************************************************************************
Hoja 4 - Ejercicio 1 
*******************************************************************************/
#include <iostream>
//test
using namespace std;

int main()
{
    //Entrada
    int numNeumaticos;
    int montoPagar;
    
    const int vNeumaticoMenorTres = 145;
    const int vNeumaticoEntreTresCinco = 138;
    const int vNeumaticoMayorCinco = 135;
    //Restricciones
    /*
    numNeumaticos > 0
    */
    
    //Lógica
    cout<<"Ingrese la cantidad de neumáticos: ";
    cin>>numNeumaticos;

    if(numNeumaticos<3){
        montoPagar =  vNeumaticoMenorTres*numNeumaticos;
    }else{
        if(numNeumaticos<3){
            montoPagar =  vNeumaticoEntreTresCinco*numNeumaticos;
        }
        else{
            montoPagar =  vNeumaticoMayorCinco*numNeumaticos;
        }
    }

    //Salida
    cout<<"El monto a pagar es: "<<montoPagar<<endl;

    return 0;
}


/******************************************************************************
Hoja 4 - Ejercicio 3 
*******************************************************************************/
#include <iostream>
//test
using namespace std;

int main()
{
    //Entrada
    float diametroPizza;
    int cantIngredientesExtra;
    
    const float vPorCentrimetroPizza = 1.5;
    const float vIngredienteExtra = 2.5;

    float montoPorCentimetro, montoPorIngrediente, montoPagar;
    //Restricciones
    /*
    diametroPizza > 0
    cantIngredientesExtra > 0
    */
    
    //Lógica
    cout<<"Ingrese el diamétro de la pizza: ";
    cin>>diametroPizza;

    cout<<"Ingrese la cantidad de ingredientes extra de la pizza: ";
    cin>>cantIngredientesExtra;

    montoPorCentimetro = vPorCentrimetroPizza * diametroPizza;
    montoPorIngrediente = vIngredienteExtra * cantIngredientesExtra;

    montoPagar = montoPorCentimetro + montoPorIngrediente;

    //Salida
    cout<<"El monto a pagar es: "<<montoPagar<<endl;

    return 0;
}

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