// Figura 2.1: fig02_01.cpp
// Programa de impressão de texto
/* diretiva de pré-processador
utilizada sempre que for fazer saída ou entrada de dados
a partir do teclado.
*/
#include <iostream> //permite que o programa gere saída de dados na tela

// a função main inicia a execução do programa
int main(){
    /* uso da diretiva 
    namespace::função
    << (operador de inserção de fluxo)
    */
    std::cout << "Inicio em C++\n"; //exibe a mensagem
    std::cout << "\a"; //aviso sonoro, não emitiu
    return 0;   //indica que o programa terminou com sucesso
} //fim da função main