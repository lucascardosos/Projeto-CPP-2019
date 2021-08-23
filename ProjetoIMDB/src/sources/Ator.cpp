/*! 
@author João Paulo Nunes de lima
*/

#include "../headers/Ator.hpp"

void Ator::mostrarInfo(){
    //! Método criado para mostrar as informações do ator.
    std::cout << "Nome: " << getNome() << std::endl 
            << "Idade: " << getIdade() << std::endl
            << "Endereco: " << getEndereco() << std::endl
            << "Quantidade de Obras: " << getQuantObras() << std::endl;

}

std::vector<int> Ator::getObras(){
    return obrasAtor;
}

//--------- TESTE ---------------
void Ator::setId(int x){
 	this->Id() = x;
}

// void Ator::setNome(std::string str1){
//  	this->nome = str1;
// }

// void Ator::setIdade(int y){
//  	this->idade = y;
// }

// void Ator::setEndereco(std::string str2){
//  	this->endereco = str2;
// }

// void Ator::setQuantObras(int z){
//  	this->quantObras = z;
// }

// void Ator::setObrasAtor(std::vector<int> vetor){
//  	this->obrasAtor = vetor;
// }
