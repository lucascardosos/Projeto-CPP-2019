/*!
Classe responsável pelo cadastro de obras
@author Luana Gabrielly Palhano de Oliveira Silva
*/

#ifndef OBRA_HPP
#define OBRA_HPP

/**
 * Importações.
 */
#include <string>
#include <vector>
#include <iostream>

/**
 * Definição da classe.
 */
 
 class Obra{ 
     private:
        int id; //!< Identificador da obra.
        std::string titulo; //!Salvar o titulo.
        std::string pais; //! Salvar o pais da obra
        std::string genero; //! Salvar o genero.
        float nota; //! Salvar a nota.
        int duracao; //! Salvar a duração do filme.
        std::vector<int> diretor; 
        std::vector<int> elenco;
        
     public: 
        Obra(int id_, std::string titulo_, std::string pais_, std::string genero_, float nota_,
            int duracao_, std::vector<int> diretor_, std::vector<int> elenco_): id{id_}, titulo{titulo_},
                pais{pais_}, genero{genero_}, nota{nota_}, duracao{duracao_}, diretor{diretor_}, elenco{elenco_} {}; 
               
   /**
     * Getters and Setters
     */
     
     int getId();
     std::string getTitulo();
     std::string getPais();
     std::string getGenero();
     float getNota(); 
     int getDuracao();
     std::vector<int> getDiretor();
     std::vector<int> getElenco();
     
     virtual void mostrarObra() = 0;
      
     void setNota(float nota_);
 };
 #endif
