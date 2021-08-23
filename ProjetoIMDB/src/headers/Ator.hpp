/*!
Classe responsável para registrar as obras do Ator
@author Luana Gabrielly Palhano de Oliveira Silva 
*/

#ifndef ATOR_HPP
#define ATOR_HPP

/**
 * Importações.
 */
#include <vector>
#include "../headers/Pessoa.hpp"

/**
 * Definição da classe.
 */


class Ator : public Pessoa{
    private:
        std::vector<int> obrasAtor; //! Salvar as Obras.
        
    public:
        //! construtor da classe.
        Ator(int id_, std::string nome_, int idade_, std::string endereco_, 
                int quantObras_, std::vector<int> obrasAtor_):Pessoa{id_, nome_, idade_, endereco_, quantObras_}, obrasAtor{obrasAtor_} {}
     
        /**
         * Getters and Setters
         */
        std::vector<int> getObras();
        
        void mostrarInfo() override;
        
        void setId(int x) override;
        // void setNome(std::string str1);
        // void setIdade(int y);
        // void setEndereco(std::string str2);
        // void setQuantObras(int z);
        // void setObrasAtor(std::vector<int> vetor);


};
#endif
