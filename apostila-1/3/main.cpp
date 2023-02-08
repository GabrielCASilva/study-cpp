#include <iostream>

int main(){
    int valor1, valor2, valor3;
    int soma;

    std::cin >> valor1 >> valor2 >> valor3;

    soma = valor1 + valor2 + valor3;

    std::cout << "A soma eh de: " << soma << std::endl;
    return 0;
}