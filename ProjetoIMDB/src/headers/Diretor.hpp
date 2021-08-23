/*!
Classe responsável para registrar as obras do diretor
@author Luana Gabrielly Palhano de Oliveira Silva 
*/

#ifndef DIRETOR_HPP
#define DIRETOR_HPP

/**
 * Importações.
 */
#include <vector>
#include "../headers/Pessoa.hpp"

/**
 * Definição da classe.
 */


class Diretor : public Pessoa{
    private:
        std::vector<int> obrasDiretor; //! Salvar os IDs das Obras.
        
    public:
        //! construtor da classe.
        Diretor(int id_, std::string nome_, int idade_, std::string endereco_, 
                int quantObras_, std::vector<int> obrasDiretor_):Pessoa{id_, nome_, idade_, endereco_, quantObras_},  obrasDiretor{obrasDiretor_} {};
        
        /**
         * Getters and Setters
         */

        std::vector<int> getObras();

        void mostrarInfo() override;

        int getObrasDiretor();

// //---------------- TESTE ----------------------
        void setId(int x) override;
};

#endif
