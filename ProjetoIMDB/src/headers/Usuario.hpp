/*!
Classe responsável para cadastrar os usuarios
@author Luana Gabrielly Palhano de Oliveira Silva 
*/

#ifndef USUARIO_HPP
#define USUARIO_HPP

/**
 * Importações.
 */

#include <string>

/**
 * Definição da classe.
 */
 
class Usuario{
    private:
        std::string login; //! Salvar o login do usuario.
        
    protected:
        std::string senha; //! Salvar a senha do usuario. 
        
    public:
        //! Construtor da classe.
        Usuario(std::string login_, std::string senha_): login{login_}, senha{senha_} {};
        
  /**
    * Getters and Setters
    */ 
    
    std::string getLogin();
    std::string getSenha();
    
};
#endif