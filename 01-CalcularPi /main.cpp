#include <iostream>
#include <iomanip>

double calcularPi(int iteraciones) {
    double pi = 0.0;
    int denominador = 1;
    int signo = 1;

    for (int i = 0; i < iteraciones; i++) {
        double termino = static_cast<double>(signo) / denominador;
        pi += termino;
        denominador += 2;
        signo *= -1;
    }

    return pi * 4.0;
}

int main() {
    int iteraciones = 1000000;  

    double pi = calcularPi(iteraciones);
    std::cout << "el valor de pi calculado es: " << pi << std::endl;

    return 0;
}
