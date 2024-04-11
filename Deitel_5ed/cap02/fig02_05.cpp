// Figura 2.5: fig02_05.cpp
// Programa de adição que exibe a soma de dois números
#include <iostream>

int main(){
    int number1;
    int number2;
    int sum;

    //solicita dados do usuário
    std::cout << "Enter first integer: ";
    // lê o primeiro inteiro inserido pelo usuário
    std::cin >> number1;

    std::cout << "Enter second integer: ";
    std::cin >> number2;

    sum = number1 + number2;

    //exibe sum e termina a linha
    std::cout << "Sum is " << sum << std::endl;

    return 0;
}