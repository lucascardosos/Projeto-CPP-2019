/*! 
@author João Paulo Nunes de lima
*/

/**
 * Importações
 */
#include "../headers/Filme.hpp"

void Filme::mostrarObra(){
    //! Método criado para mostrar as informacoes do filme.
    std::cout << "-----------" << std::endl
            << "Titulo: " << getTitulo() << std::endl
            << "Pais: " << getPais() << std::endl
            << "Genero: " << getGenero() << std::endl
            << "Nota: " << getNota() << std::endl
            << "Duracao: " << getDuracao() << std::endl
            << "Ano: " << ano << std::endl
            << "Estudio: " << estudio << std::endl;

}

std::string Filme::getEstudio(){
    return estudio;
}

int Filme::getAno(){
    return ano;
}




