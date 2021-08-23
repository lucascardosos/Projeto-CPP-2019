/*!
Classe responsável por cadastrar o filme 
@author Luana Gabrielly Palhano de Oliveira Silva 
*/

#ifndef FILME_HPP
#define FILME_HPP

/**
 * Importações.
 */
#include <string>
#include "../headers/Obra.hpp"

/**
 * Definição da classe.
 */
 
 class Filme : public Obra{
     private:
        int ano;
        std::string estudio;
    public:
        //! construtor da classe.
            Filme(int id_, std::string titulo_, std::string pais_, std::string genero_, 
                    float nota_, int duracao_, std::vector<int> diretor_, std::vector<int> elenco_, 
                    int ano_, std::string estudio_):
                    Obra{id_, titulo_, pais_, genero_, nota_, duracao_, diretor_, elenco_}, ano{ano_}, estudio{estudio_} {};
        
        /**
         * Getters and Setters
         */
         int getAno();
         std::string getEstudio();

         void mostrarObra() override;
         
 };
 #endif
