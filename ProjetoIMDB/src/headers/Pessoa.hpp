/*!
Classe que representa uma Pessoa, classe base para Ator e Diretor que é virual pura
graças ao método 'mostrarInfo()'.
@author João Paulo Nunes de Lima
*/

#ifndef PESSOA_HPP
#define PESSOA_HPP

/**
 * Importações.
 */
#include <string>
#include <iostream>

/**
 * Definição da classe.
 */
class Pessoa{

    private:
        int id; //!< Identificador da pessoa.
        std::string nome;   //!< Salva o nome da pessoa.
        int idade;  //!< Salva a idade da pessoa.
        std::string endereco;   //!< Guarda o endereço da pessoa.
        int quantObras;    //!< Mantém a quantidade de obras atribuidas a pessoa.

    public:
        //! Construtor da classe.
        Pessoa(int id_, std::string nome_, int idade_, std::string endereco_, 
                int quantObras_): id{id_}, nome{nome_}, idade{idade_}, endereco{endereco_}, quantObras{quantObras_} {};

        /**
         * Getters and Setters
         */
        std::string getNome();
        int getId();
        int getIdade();
        std::string getEndereco();
        int getQuantObras();

        //! Função que imprime os dados de Pessoa.
        /**
         * Método virtual utilizado para imprimir todas as informações da pessoa em tela.
         */
        virtual void mostrarInfo() = 0;

// // // ------------- TESTE -------------------------------
        //!< Função que retorna a string 'id'.
        std::string Id();
        virtual void setId(int) = 0;
        
};

#endif