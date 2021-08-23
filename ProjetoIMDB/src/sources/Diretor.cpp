/*! 
@author João Paulo Nunes de lima
*/

/**
 * Importações
 */
#include "../headers/Diretor.hpp"

void Diretor::mostrarInfo(){
    //! Método criado para mostrar as informacoes do diretor.
    std::cout << "Nome: " << getNome() << std::endl
            << "Idade: " << getIdade() << std::endl
            << "Endereco: " << getEndereco() << std::endl;
}


// // --------------------------- TESTE --------------------
void Diretor::setId(int x){
 	this->Id() = x;
}

int Diretor::getObrasDiretor(){
    return obrasDiretor[0];
}