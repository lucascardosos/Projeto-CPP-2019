/**
 * Importações
 */
#include "../headers/Pessoa.hpp"

//! Método que retorna o nome da pessoa.
std::string Pessoa::getNome(){
    return nome;
}

//! Método que retorna o id da pessoa.
int Pessoa::getId(){
    return id;
}

//! Método que retorna a idade da pessoa.
int Pessoa::getIdade(){
    return idade;
}

//! Método que retorna o endereço da pessoa.
std::string Pessoa::getEndereco(){
    return endereco;
}

//! Método que retorna a quantidade de obras da pessoa.
int Pessoa::getQuantObras(){
    return quantObras;
}




//------------ TESTE -----------
std::string Pessoa::Id(){
    return "id";
}
