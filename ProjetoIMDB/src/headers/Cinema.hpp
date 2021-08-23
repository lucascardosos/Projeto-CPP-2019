/*!
Classe feita para o cadastro, remoção e adiçao do cinema.
@Luana Gabrielly Palhano de Oliveira Silva
*/

#ifndef CINEMA_HPP
#define CINEMA_HPP

/**
 * Importações.
 */
#include <vector>
/**
 * Definição da classe.
 */

#include <string>

class Cinema{
    private: 
    
        std::string nome ; //<! Salva o nome do cinema.
        std::string  endereco ;  //<! Salva o endereço do cinema;
        std::vector<int> cartaz ;  //!< Salva os IDs dos filmes em cartaz

    public: 
        //! Construtor da classe
        Cinema ( std::string nome_, std::string endereco_, std::vector<int> cartaz_): nome{ nome_}, 
            endereco{endereco_}, cartaz{cartaz_} {};
            
        
        std::string getNome();
        std::string getEndereco();
        std::vector<int> getCartaz();
        
        //!Função de remoção do cartaz.
        void removerCartaz(int idFilme);
        //!Função para adicionar cartaz.
        void addCartaz(int idFilme);
        
};
#endif
