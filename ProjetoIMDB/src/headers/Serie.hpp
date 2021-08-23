/*!
Classe responsável por cadastrar as series.
@author Luana Gabrielly Palhano de Oliveira Silva 
*/

#ifndef SERIE_HPP
#define SERIE_HPP

/**
 * Importações.
 */
#include <string>
#include "../headers/Obra.hpp"

/**
 * Definição da classe.
 */
class Serie : public Obra{
    private:
        std::string emissora;
        std::string anoInicio;
        std::string anoFim;
        int quantEpisodios; 
    
    public:
       //! construtor da classe.
            Serie(int id_, std::string titulo_, std::string pais_, std::string genero_, 
                    float nota_, int duracao_, std::vector<int> diretor_, std::vector<int> elenco_, 
                    std::string emissora_, std::string anoInicio_, std::string anoFim_ ,int quantEpisodios_):
                    Obra{id_, titulo_, pais_, genero_, nota_, duracao_, diretor_, elenco_},
                    emissora{emissora_}, anoInicio{anoInicio_}, anoFim{anoFim_}, quantEpisodios{quantEpisodios_} {};
             
     /**
      * Getters and Setters
      */
      
      std::string getEmissora();
      std::string getAnoInicio();
      std::string getAnoFim();
      int getQuantEpisodios();
      
      void setAnoFim(std::string fim_);
      void setQuantEpisodios(int quant_);
};
#endif
