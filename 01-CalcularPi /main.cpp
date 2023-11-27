#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

double Calcular_Pi(){
    double valor_pi = 0;
    double divisor = 1.0;
    int signo = 1;
    double precision = 0.00000011;

    while (true) {
        double valor_pi_bis = valor_pi;
        valor_pi += signo * (1.0 / divisor);
        divisor += 2;
        signo *= -1;
        if (abs(valor_pi - valor_pi_bis) < precision) // calculo de valor absoluto que puedo desarrollar gracias a la libreria cmath
            break;
    }
    return valor_pi * 4;
}
int main(){
    double ValorPi_Calculado = Calcular_Pi();
    cout<<"El valor de pi es igual a "<< valorpi_calculado << endl; 
    return 0; 
}
