/**
 * Importações
 */
#include <iostream>
#include "../headers/Imdb.hpp"

/** Função principal que inicializa o sistema*/
/// Return zero se o sistema terminou sem falhas.
int main(){
	Imdb imdb;
    std::cout << "\n\n";
    imdb.menuUser();		//!< Executa a função 'menuUser()'
    std::cout << "\nSistema encerrado com sucesso!!!\n";
	std::cout << std::endl;

    return 0;
}