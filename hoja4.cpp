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
